import numpy as np
import pandas as pd
import pickle
import os
import csv

#C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/
corn = pd.read_csv("C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/maize.csv")
corn.columns = ['filename','energy','contrast','homogeneity','IDM','entropy','mean','cluster-shade','cluster-prominence',
                'shapes-detected','circle','triangle','rectangle','irreg-S','irreg-L',
                'circle-area','triangle-area','rectangle-area','irreg-S-area','irreg-L-area']
#corn = corn.drop(['circle-area', 'triangle', 'rectangle', 'triangle-area', 'rectangle-area'], axis=1)
corn = corn.replace(["inf", "-nan(ind)", "#NAME?", np.NaN, np.inf], value='0')

if os.path.isfile("rfc.pickle"):
	# Load models
    rfc = pickle.load(open("rfc.pickle", 'rb'))

X = corn.drop('filename', axis=1)

res = [rfc.predict(X[:1]), rfc.predict(X[1:2]), rfc.predict(X[2:3]), rfc.predict(X[3:4])]
csvfile = "C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/classify.txt"

print("Prediction 1: {}".format(rfc.predict(X[:1])))
print("Prediction 2: {}".format(rfc.predict(X[1:2])))
print("Prediction 3: {}".format(rfc.predict(X[2:3])))
print("Prediction 4: {}".format(rfc.predict(X[3:4])))

#Assuming res is a flat list
with open(csvfile, "w") as output:
    writer = csv.writer(output, lineterminator='\n')
    for val in res:
        writer.writerow([val])    

#Assuming res is a list of lists
with open(csvfile, "w") as output:
    writer = csv.writer(output, lineterminator='\n')
    writer.writerows(res)
	