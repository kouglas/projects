#! python3
   # textMyself.py - Defines the textmyself() function that texts a message
   # passed to it as a string.

   # Preset values:
   accountSID = 'AC1b76742355b80174eba9491b0cf88b7d'
   authToken = '56bdc6b51b0cacddfb6ed5ffb4e4fd34'
   myNumber = '+15744404315'
   twilioNumber = '+1+1 762 254 3463'
   from twilio.rest import TwilioRestClient

 def textmyself(message):
    twilioCli = TwilioRestClient(accountSID, authToken)
    twilioCli.messages.create(body=message, from_=twilioNumber, to=myNumber)