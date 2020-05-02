# -*- coding: utf-8 -*-
"""
Created on Sat May  2 09:37:02 2020

@author: Jason
"""
def f(ind):
    if(ind == 0 or ind == 1):
        return 1
    return f(ind-1) + f(ind-2)
    



total = f(4)
print(total)


