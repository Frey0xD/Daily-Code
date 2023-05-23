import random

class Chatbot:

    def __init__(self, name):
        self.name = name
        self.responses = [
            "I'm sorry, I don't understand.",
            "Can you please rephrase that?",
            "That's an interesting question.",
            "I'm not sure what you mean.",
            "I'm still learning, but I'm getting better every day."
        ]

    def respond(self, message):
        response = random.choice(self.responses)
        return response


chatbot = Chatbot("Bard")

while True:
    message = input("What do you want to ask Bard? ")
    response = chatbot.respond(message)
    print(response)
