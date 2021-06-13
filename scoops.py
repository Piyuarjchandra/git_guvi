# -*- coding: utf-8 -*-
"""
Created on Thu Oct 15 17:56:35 2020

@author: patryk
"""
class Scoop():
    def __init__(self,flavor):
        self.flavor=flavor
def create_scoops():
    scoops=[Scoop('chocolate'),
	              Scoop('vanilla'),
	              Scoop('persimmon')]
    for scoop in scoops:
        print(scoop.flavor)
create_scoops()
        