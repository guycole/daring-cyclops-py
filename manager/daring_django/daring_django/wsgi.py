#
# Title:wsgi.py
# Description:
# Development Environment:OS X 10.13.6/Python 3.7.2/Django 3.1.1
# Author:Guy Cole (gsc at gmail dot com)
#

"""
WSGI config for daring_django project.

It exposes the WSGI callable as a module-level variable named ``application``.

For more information on this file, see
https://docs.djangoproject.com/en/3.1/howto/deployment/wsgi/
"""

import os

from django.core.wsgi import get_wsgi_application

os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'daring_django.settings')

application = get_wsgi_application()

# ;;; Local Variables: ***
# ;;; mode:python ***
# ;;; End: ***