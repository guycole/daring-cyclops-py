#
# Title:makefile
#
# Description:
#
#   'make clean' removes all core and object files
#   'make ultraclean' removes all executables
#
# Operating System/Environment:
#   Ubuntu 18.04.3 LTS (Bionic Beaver)
#   GNU Make 4.1
#
# Author:
#   G.S. Cole (guycole at gmail dot com)
#
DOCKER = docker
DARING_CYCLOPS_MANAGER = daring-cyclops-manager
DARING_CYCLOPS_WORKER = daring-cyclops-worker
KUBECTL = kubectl

manager_build:
	cd manager; $(DOCKER) build . -t $(DARING_CYCLOPS_MANAGER)

manager_deploy:
	cd manager; $(KUBECTL) apply -f pg-cred.yaml
	cd manager; $(KUBECTL) apply -f pg-volume.yaml
	cd manager; $(KUBECTL) apply -f pg-claim.yaml
	cd manager; $(KUBECTL) apply -f pg-pod.yaml
	cd manager; $(KUBECTL) apply -f django-service.yaml
	cd manager; $(KUBECTL) apply -f monitor-namespace.yaml
	cd manager; $(KUBECTL) apply -f prom-config.yaml
	cd manager; $(KUBECTL) apply -f prom-deploy.yaml
	cd manager; $(KUBECTL) apply -f prom-service.yaml
	cd manager; $(KUBECTL) apply -f grafana-deploy.yaml
	cd manager; $(KUBECTL) apply -f grafana-service.yaml
	cd manager; $(KUBECTL) apply -f node-exporter-daemonset.yaml

worker_build:
	cd worker; $(DOCKER) build . -t $(DARING_CYCLOPS_WORKER)

#
#  Cleanup this subdirectory.
#
.PHONY: clean
clean:
	-@rm -f *.o *.BAK core

#
#  Nuke all the executables.
#
.PHONY ultraclean:
ultraclean:
	-@rm -f lib/*.a
	-@rm -f *~ TAGS depend.include $(TEST1)
	-@touch depend.include
