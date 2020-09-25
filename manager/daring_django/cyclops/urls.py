#
# Title:urls.py
# Description:
# Development Environment:OS X 10.13.6/Python 3.7.2/Django 3.1.1
# Author:Guy Cole (gsc at gmail dot com)
#
from django.urls import path

from . import views

urlpatterns = [
    path('', views.index, name='index')
]

# ;;; Local Variables: ***
# ;;; mode:python ***
# ;;; End: ***