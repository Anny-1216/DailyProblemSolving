rows=int(input('Enter number of rows :'))
columns = int(input('Enter number of columns :'))
order=str(rows)+'x'+str(columns)
print('Order of your matrix is '+order)
matrix=[]

for i in range(1,rows+1):
    listi=[]
    for j in range(1,columns+1):
        print(f'Enter element ({i},{j})')
        element=int(input(""))
        listi.append(element)
    matrix.append(listi)
print(matrix)

def row_col_matrix(matrix):
    if rows==1:
        print('Column matrix',order)
    elif columns==1:
        print('Row matrix')
def zero_null_matrix(matrix):
    count=0
    for i in range(0,rows):
        for j in range (0,columns):
            k=(matrix[i][j])
            print(k)
            if (k!=0):
                count=count+1
                break
            
        break
    if count!=0:
        print('Not Null Matrix')
    else:
        print('Null Matrix')
        return 1
    
def square_matrix(rows,column):
    if rows==column:
        print('Square Matrix')
        return 1
    else:
        print('Not Square Matrix')

def transpose_matrix(matrix):
    new_matrix=[]
    for i in range(0,columns ):
        listi=[]
        for j in range(0,rows):
            print(f'Enter element ({i},{j})')
            element=matrix[j][i]
            listi.append(element)
        new_matrix.append(listi)
    print(new_matrix)

transpose_matrix(matrix)