fruits = ["apple", "banana", "cherry"]
a = ["orange","donkey"]
fruits.append(a)


print(fruits)


list1 = ["a",'b']
list2 =["c","d"]
list3 = list1.extend(list2)
list3 = list1
list4 = list1.append(list2)
print(list4)
print(list3)


contacts = {"john" : '1234',
            "dennis" : "4567",
            "alpha" : "7890"}
print(contacts)

astring= "string to copy"
print(astring[:14:-1])
newstr=astring[:]
newstr = "1".join(astring)
print(newstr)
print(len(newstr))


ls1 = [1,2,4,9]
print(max(ls1))
print(min(ls1))
print(sum(ls1))

myls = [1,7,1,2]
myls =myls.sort()
print(myls)