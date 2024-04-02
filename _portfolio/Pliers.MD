---
title: "Multi-Material Pliers"
excerpt: "Rigid PLA Jaws, Flexible TPU Joint"
header:
  image: /assets/img/uFluidic_Snapshot.jpg
  teaser: /assets/img/uFluidic_Snapshot.jpg
gallery:
  - image_path: assets/img/pliers.gif
    alt: 'Pliers First Draft in Action'
  - image_path: assets/img/pliersV1.png
    alt: 'Pliers First Draft'
  - image_path: assets/img/pliersV2.png
    alt: 'Pliers Final Version'
---

Description of the project with a blurb about print-in-place parts. Perform external
research to determine other applications print-in-place has been used. What
combination of materials work well for print-in-place?
o Embedded CAD model
o About the design and iterative process (e.g., how was the spring component
created and how is it retained in the model, materials used)
o Relevant specifications of the pliers (jaw length, jaw capacity)
o Print settings
o Picture gallery of iterations and pliers.
o .GIF of pliers working


# Introduction

Print-in-place models are multi-part designs that are fully functional right off
the print bed, with no post-processing or assembly required. These can be created
due to the layer-by-layer process of FFF printing, allowing for internal joints
that cannot be accessed after the print is complete. Clearance is built into the
joints, down to 0.15 mm. However, even with optimized print settings, these models
can still have irregular and sticky movements due to the layer lines and other
print inconsistencies.  

Another method to obtain the same useful motion is to
split a design into multiple pieces, including a flexible element in the model
made of a thermoelastomer. The rigid pieces can be printed separate from the flexible
element or all together. Mutli-material extrusion is required for printing the
flexible and rigid components together, which can be a challenge for plastics that
have differing surface energies. Instead, printing the components separately allows
for them to be pressed together post-print.  

Some applications of print-in-place devices are:  

- Robotics and Automation: Print-in-place joints and mechanisms are used
in robotic systems and machinery, allowing for complex movement without the need
for assembly of multiple parts e.g. hinges and latches.

- Medical Devices: Print-in-place parts are used to produce bespoke components
for patient-specific applications where precise fit and functionality are crucial
e.g. prosthetics and orthopedics.

- Consumer Electronics: Print-in-place parts are use to create compact, integrated
designs on a microscopic level, such as in smartphones, wearables, and household
appliances.

# Design Specifications

Design and print needle nose pliers that

- are capable of gripping and picking up through-hole resistors

- should use a flexible material for a spring component that returns them to the open
position whenever not in use

- can use an assembly of 3 parts (2 rigid handles and 1 elastic spring element)

# My Model

The pliers model can be found below:

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6e5778a2a2a2e09eea?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

By intuiting where the clamping force is being transformed into the flexible element,
the flexible element needed to extend into the rigid handles and jaws to ensure
the flexible element remained in contact with the handles and jaws while in use.

Knowing the nozzle width is 0.6 mm, for the flexible element, a 3 x 3 grid of
1.8 mm walls was designed. This width was chosen since it can be easily sliced
and has enough rigidity to return the jaws to the open position. The borders of
the grid were thickened to 3 mm to ensure the grid maintains a diamond shape while
deformed. Small 1 mm OD holes were cut into the corners of the grid to allow the
element to flex easier while maintaining its springiness.

The rigid handles are jaws were inspired by a pair of COTS pliers; approximate
lengths were taken and used as a starting point for the handles and jaws. The
handles and jaws were thickened since PLA is not as strong as steel. The jaws
were designed to have 10 mm of clearance in the open position and have 152 sq. mm
of surface area. Ridges were cut into the jaws to make it easier to grab small
electronic components. The handles are 110 mm long and the outermost edges are
100 mm apart in the open position.

T-joints and dovetail joints were used to connect the rigid and flexible components
together. The flexible element extends into the handles to ensure the handles can
effectively pull on the flexible element. The element also extends into the jaws
to ensure the element effectively pushes the jaws together.

## Iteration

A first draft of the design was printed and assessed. The design successfully
hand-pressed together and actuated. However, under high loading, the dovetail
joints on both the handles and jaws popped loose. The handles also came into
contact with one another when sufficient force was applied. Furthermore, the TPU element
shrunk significantly more than the PLA parts.

In final design, the dovetail joints were replaced with T-joints in both the
handles and jaws. The handles were redesigned to allow for more movement and
higher force applications. Finally, the rigid elements were reduced from a 12 mm
height to 10 mm to compensate for the shrinking TPU.

## Print Settings

Flexible Element

- Material: Polymaker TPU 95A
- Temperature: 230 C Hotend, 50 C Bed
- Slicing: -0.5 mm horizontal compensation for press fit
- Else: Default DFL 0.6mm flexible settings

Rigid elements

- Material: Recycled PLA
- Temperature: 200 C Hotend, 60 C Bed
- Layers: 5mm walls, no top or bottom layers, Archimedes spiral infill for aesthetics
- Slicing: -0.05 mm horizontal compensation for dimensional accuracy
- Else: Default DFL 0.6mm rigid settings

# Media

{% include gallery caption="Device Mold, Completed Device, and Device in Action." %}
