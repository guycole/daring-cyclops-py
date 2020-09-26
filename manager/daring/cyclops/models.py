#
# Title:models.py
# Description:
# Development Environment:OS X 10.13.6/Python 3.7.2/Django 3.1.1
# Author:Guy Cole (gsc at gmail dot com)
#
import uuid

from django.db import models

class Player(models.Model):
    id = models.UUIDField(primary_key=True, default=uuid.uuid4)
    created = models.DateTimeField(auto_now_add=True)
    last_on = models.DateTimeField(auto_now_add=True)
    active = models.BooleanField(default=True)
    name = models.CharField(max_length=128)

    class Meta:
        ordering = ("name",)

    def __repr__(self):
        return self.name

    def __str__(self):
        return self.name

# ;;; Local Variables: ***
# ;;; mode:python ***
# ;;; End: ***