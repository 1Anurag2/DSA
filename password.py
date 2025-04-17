from wifipasswords import WifiPasswords

passwords = WifiPasswords().get_passwords()

connected_passwords = WifiPasswords().get_currently_connected_passwords()

print(passwords)
print(connected_passwords)