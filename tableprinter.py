
#structure of table
def printTable(tableData):
    colWidths = [0] * len(tableData)
    for i, column in enumerate(tableData):
        for row in column:
            length = len(row)
            if length > colWidths[i]:
                colWidths[i] = length
    
    coulmn_count = len(tableData)
    row_count = len(tableData[0])

    for row_start in range(row_count):
        for column_start in range(coulmn_count):
            print(tableData[column_start][row_start].rjust(colWidths[column_start]), end = ' ')
        print()




tableData = [['apples', 'oranges', 'cherries', 'banana'],
              ['Alice', 'Bob', 'Carol', 'David'],
              ['dogs', 'cats', 'moose', 'goose']]
printTable(tableData)