#
# Title:views.py
# Description:
# Development Environment:OS X 10.13.6/Python 3.7.2/Django 3.1.1
# Author:Guy Cole (gsc at gmail dot com)
#
from django.shortcuts import render
from django.template import loader
from django.http import HttpResponse

def index(request):
    context = {}
    return render(request, 'cyclops/index.html', context)

def driver(request):
    return HttpResponse("driver driver")

# ;;; Local Variables: ***
# ;;; mode:python ***
# ;;; End: ***