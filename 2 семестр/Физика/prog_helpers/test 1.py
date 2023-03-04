import matplotlib.pyplot as plt
import pandas as pd

class lab:
    def prt(self):
        print(self.build_table())
        print('xsr = ', self.sr)
        print('sum = ', sum(self.data))

    def build_table(self):
        return pd.DataFrame(data = {'xi' : self.data,
                                    'xi - sr' : list(map(lambda i: round(i - self.sr, 2), self.data)),
                                    '(xi - sr)^2' : list(map(lambda i: round((i - self.sr)**2, 4), self.data))},
                          index = list(range(1, len(self.data) + 1)))

    def excel_out(self):
        df = self.build_table()
        with open("data.csv", 'w') as f:
            df.to_csv(f, lineterminator = '\n', sep = ';', decimal = ',')


    def histogram(self):
        plt.hist(self.table['xi'], color='blue', edgecolor='black',
                 bins = len(set(self.data)), bottom = min(data))
        plt.xlabel('f', loc = 'right')
        plt.show()

    def __init__(self, arr):
            self.data = arr
            self.sr = sum(arr)/len(arr)
            self.table = self.build_table()

data = list(map(float, """1.96
            1.94
            1.93
            1.90
            1.85
            1.85
            1.83
            1.82
            1.84
            1.79
            1.76
            1.74
            1.71
            1.71
            1.70
            1.80
            1.86
            1.96
            1.83
            1.90
            1.75
            1.96
            1.83
            1.93
            1.91
            1.90
            1.85
            1.93
            1.81
            1.96
            1.81
            1.93
            1.90
            1.71
            1.83
            1.73
            1.90
            1.91
            1.75
            1.83
            1.81
            1.95
            1.89
            2.00
            1.56
            2.06
            1.91
            1.88
            1.88
            1.81""".split()))

data1 = list(map(lambda x: x - 0.5, data))

data2 = [1.32]

data3 = [1.38, 1.23, 1.35, 1.40]

data4 = list(map(lambda x: x - 0.5, [1.90, 1.74, 1.68, 1.91, 1.81, 2.06, 1.70, 1.70, 1.75, 1.82, 1.83, 1.80]))

obj = lab(data1)
obj.prt()
#print(obj.build_table())
obj.excel_out()
