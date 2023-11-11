cars = ["Ford", "Volvo", "BMW"]

x = cars[0]

cars[0] = "Toyota"

x = len(cars)

for x in cars:
  print(x)

cars.append("Honda") # Adds to the last part of the list
cars.remove("Volvo") # removes from list anywhere

print("")

for x in cars:
  print(x)