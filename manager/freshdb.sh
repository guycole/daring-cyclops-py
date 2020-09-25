#!/bin/bash
#
# Title:freshdb.sh
#
# Description: reset database
#
# Development Environment: OS X 10.13.6, Python 3.7.2, Django  2.2.1
#
# Author: Guy Cole (guycole at gmail dot com)
#
PATH=/bin:/usr/bin:/etc:/usr/local/bin; export PATH
#
rm db.sqlite3
rm roamer/migrations/000*
rm seeker/migrations/000*
source ../venv/bin/activate
python manage.py makemigrations
python manage.py migrate
#