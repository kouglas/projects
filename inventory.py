# items in inventory 
tool = {'arrow': 12, 'gold coin': 42, 'rope': 1, 'torch': 6, 'dagger': 1}

# defining a function to display

def displayInventory(inventory):
    print("Inventory:")
    item_count = 0
    for item, quantity in inventory.items():
        # fill in the code here
        print(str(quantity)+' '+item)
        item_count += quantity
    print("Total number of items:" + str(item_count))

displayInventory(tool)
    

def addToInventory(inventory, addedItems):
    # put some code here
    for item in addedItems:
        inventory.setdefault(item, 0)
        inventory[item] += 1
        return inventory

inv = {'gold coin': 42, 'rope': 1}
dragonLoot = ['gold coin', 'dagger', 'gold coin', 'gold coin' 'ruby']
inv = addToInventory(inv, dragonLoot)
displayInventory(inv)
