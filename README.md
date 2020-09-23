# daring-cyclops
Daring Cyclops

Still a work in progress, visit later and hopefully I will have more to share.

manager = django and postgresql
messenger = rabbitmq
monitor = prometheus
worker = c++

#
develop with minikube

#
docker build . -t daring-cyclops-dev
#
docker build -f dockerfile.dev . -t daring-cyclops-dev
#
docker run --rm -it -v ~/IdeaProjects/daring-cyclops:/home/gsc/daring-cyclops daring-cyclops-dev /bin/bash
#
docker run --rm -it daring-cyclops-dev /bin/bash
#
