#!/bin/bash
#
cd /home/django
#python3 manage.py makemigrations
#python3 manage.py migrate
#
#python3 manage.py collectstatic --clear --noinput
#python3 manage.py collectstatic --noinput
#
mkdir /var/log/gunicorn
touch /var/log/gunicorn/gunicorn.log
touch /var/log/gunicorn/access.log
#
echo starting gunicorn
#
exec gunicorn jaded.wsgi:application \
    --name jaded \
    --bind unix:gunicorn.sock \
    --workers 3 \
    --statsd-host=jaded_django_graphite_1:8125 \
    --log-level=info \
    --log-file=/var/log/gunicorn/gunicorn.log \
    --access-logfile=/var/log/gunicorn/access.log &
#
echo starting nginx
exec service nginx start
#
