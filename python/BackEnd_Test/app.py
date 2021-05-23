from flask import Flask
import yfinance as yf
import pandas as pd
'''
def square(x:int)-> int:
    return x*x

def cube(x :int)->int:
    return x*x*x

def random(input : str) -> str:
    return input
'''
#Super_Square = lambda x : x+2
#list = [1,2,3,4,5]
#g = 'Hello {}'.format(list)
#print(g)
#print(Super_Square(5))
'''
def StockStuff():
    apple = yf.Ticker('AAPL')
    History = apple.balance_sheet
    x = '{}'.format(History)
    return x

#print(StockStuff())
'''


app = Flask(__name__)
@app.route('/')


def test():
   # x = 3
   # y = square(x)
   # z = cube(x)
    return 'hello'

