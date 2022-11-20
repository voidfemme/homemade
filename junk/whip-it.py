def main():
  print("Does DEVO Think You Should \"Crack That Whip,\" Or \"Move Ahead?\" Let's find out!")
  print("type \"yes\" or \"no\"")
  problem()

def problem():
  it_has = ""
  yes = "yes"
  it_has = input("Has a problem come along? ")
  if it_has == yes:
    whip_it("you must")
  else:
    cream()

def cream():
  it_has = ""
  yes = "yes"
  it_has = input("Has the cream sat out too long? ")
  if it_has == yes:
    whip_it("you must")
  else:
    wrong()

def wrong():
  it_has = ""
  yes = "yes"
  it_has = input("Is something going wrong? ")
  if it_has == yes:
    whip_it("you must")
  else:
    good_time()

def good_time():
  it_has = ""
  yes = "yes"
  it_has = input("Has a good time turned around? ")
  if it_has == yes:
    whip_it("you must")
  else:
    lived_down()

def lived_down():
  you_have = ""
  yes = "yes"
  you_have = input("Have you ever lived it down? ")
  if you_have == yes:
    whip_it("not unless you")
  else:
    gotten_away()

def gotten_away():
  it_has = ""
  yes = "yes"
  it_has = input("Has anyone gotten away? ")
  if it_has == yes:
    whip_it("you must")
  else:
    crack_that_whip()

def whip_it(string):
  print(string,"WHIP IT!")
  whipped_good()
  
def whipped_good():
  it_is = ""
  yes = "yes"

  it_is = input("... is it whipped good? ")
  if it_is == yes:
    print("DEVO thinks you should move ahead")
  else:
    crack_that_whip()

def crack_that_whip():
  print(" DEVO thinks you should crack that whip")

main()
