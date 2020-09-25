#
# Title:asgi.py
# Description:
# Development Environment:OS X 10.13.6/Python 3.7.2/Django 3.1.1
# Author:Guy Cole (gsc at gmail dot com)
#
"""
ASGI config for daring_django project.

It exposes the ASGI callable as a module-level variable named ``application``.

For more information on this file, see
https://docs.djangoproject.com/en/3.1/howto/deployment/asgi/
"""

import os

from django.core.asgi import get_asgi_application

os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'daring_django.settings')

application = get_asgi_application()

# ;;; Local Variables: ***
# ;;; mode:python ***
# ;;; End: ***