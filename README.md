# Signals and Systems
> Design, build, program, and test a signaling system that communicates useful information without a screen or speaker. The red, yellow, and green LEDs 
> automatically cycle through your planned states; no push button is needed. Complete this README as you work. Keep your planning, testing evidence, and 
> link to your video demo here.

## 1. System purpose

- **Problem and real-world context:** To show 8th graders how fun and cool coding can be and trying to get them interested in coding.
- **Intended user:**  Was built for 8th graders but can be used for any age. 
- **What information should your signals communicate?** Which color was the winner by being the light that is lite at the end of the sequence. 
- **How does the user interpret and use that information?** The lights will stop rotating though and then there wil one light that blinks a few times then goes solid. This is the light that wins. 
## 2. State table and pattern plan

| Step | State/message name | Red LED  | Blue LED | Green LED | Yellow LED | White LED | Duration (ms) | Meaning to the user |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Red light | ON | OFF | OFF | OFF | OFF | 20 - 600 | Red is selected |
| 2 | Blue light | OFF | ON | OFF | OFF | OFF | 20 - 600 | Blue is selected |
| 3 | Green light | OFF | OFF | ON | OFF | OFF | 20 - 600 | Green is selected |
| 4 | Yellow light | OFF | OFF | OFF | ON | OFF | 20 - 600 | Yellow is selected |
| 5 | White light | OFF | OFF | OFF | OFF | ON | 20 - 600 | White is selected |
| 5 | No light | OFF | OFF | OFF | OFF | OFF | 20 - 600 | The round is over, whichever light is blinking is the selected one |

**Sequence:** Red light → Blue light → Green light → Yellow light → White light → repeat until light time is long enough → End light → No light → repeat three times → End light 

## 3. Circuit design



![Circuit diagram screenshot](circuit.png)

### Ohm's law calculations

| LED | Arduino output voltage (V) | LED voltage drop (V) | Calculated resistor voltage (V) | Target current (A) | Calculated resistance (Ω) | Chosen resistance (Ω) | Estimated actual current (A) |
| --- | --- | --- | --- | --- | --- | --- | --- |
| Red LED | 5.0 | 2v  |3v |10mA |300Ω|330Ω |  6mA |
| Blue LED | 5.0 | 3v  | 2v | 10mA |200Ω  | 220Ω  | 9mA |
| Green LED | 5.0 | 3v | 2v | 15mA |  133Ω | 220Ω| 9mA | 
| yellow LED | 5.0 | 2v | 3v | 15mA |200Ω  |  220Ω| 13mA | 
| White LED | 5.0 | 3v  | 2v  | 15mA |133Ω|  220Ω | 9mA |

## 4. Testing and revision
> Test your system with two people outside our class. Show each person the complete sequence before explaining its intended meaning. Ask:
> What do you think this system is communicating? Describe what each light pattern means to you.
> Were any patterns confusing or difficult to tell apart? Explain which ones and why.
> What would make the signals easier to understand? Consider the colors, combinations, blinking, or timing.

**Person 1:** TODO

**Person 2:** TODO

**Did their interpretations match your intended meaning? Explain:** TODO

**Revisions made to the system based on feedback**
> Describe at least one revisions you made based on the feedback you received and TEST it again.

**Revision and reason**: TODO

**Result after testing the revision:** TODO

## 5. Video Demonstration

[Video demonstration](https://youtube.com/shorts/T9hKf_W99U8?feature=share)