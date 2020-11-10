#
# docker build . -t daring-cyclops-django
# docker run --rm -it -p 8080:80 daring-cyclops-django /bin/bash
#
FROM ubuntu:18.04
LABEL build_date="2020-09-04"
LABEL description="daring-cyclops"
LABEL maintainer="guycole@gmail.com"
#
ENV DJANGO_ENV DEV
#ENV DJANGO_ENV PROD
#ENV DJANGO_SECRET f8551b04-6461-459f-8409-04dc87f2a5af
ENV DJANGO_DOCKER TRUE
ENV PYTHONDONTWRITEBYTECODE 1
ENV PYTHONUNBUFFERED 1
#
RUN apt-get update 
RUN apt-get -y upgrade
RUN apt-get install -y python3
RUN apt-get install -y python3-pip 
RUN apt-get install -y virtualenv
#RUN apt-get install -y vim
RUN apt-get install -y nginx
#RUN apt-get install -y postgresql-client
#
WORKDIR /home/django
COPY . /home/django
#
RUN pip3 install --upgrade pip
RUN pip3 install -r /home/django/requirements.txt
#
COPY django_nginx.conf /etc/nginx/sites-available/
RUN ln -s /etc/nginx/sites-available/django_nginx.conf /etc/nginx/sites-enabled/
#
RUN echo "daemon off;" >> /etc/nginx/nginx.conf
#
ENTRYPOINT ["./django_entrypoint.sh"]
#
