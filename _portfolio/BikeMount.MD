---
title: "Adjustable Phone Bike-Mount"
excerpt: "Demonstration of Top-down Modeling"
header:
  image: /assets/img/BikeMountV2.png
  teaser: /assets/img/BikeMountCS.png
gallery:
  - image_path: assets/img/BikeMountCS.png
  - image_path: assets/img/BikeMountLocking.png
  - image_path: assets/img/BikeMountV1.png
  - image_path: assets/img/BikeMountV2.png
---

# Introduction

Top-down modeling is an important style of design that allows for multi-part
assemblies to be created with efficient referencing of dimensions between parts.
Traditional design techniques require use of variables and importing parameters
between parts to ensure the proper fits between components.

In top-down modeling, an assembly is created by starting with known features that
must be incorporated e.g. a bicycle handlebar. Then, components that directly
interface with the known features are modeled. Components are then added one-by-one,
each referencing dimensions of existing parts, using as-built joints to fix parts
in place.

# Design Specifications

CAD Requirements:

- At least three individual components modeled with a top-down approach

- Correctly assembled with as-built joints

- Clean organized sketches and features

- Parametric modeling is encouraged

Holder Design Criteria:

- Attaching holder to handlebars – The holder must securely grip 23-25 mm handlebars (or the dimensions of your bike) without damaging them (e.g., no drilling or set screws).
- A special tool, such as an allen key, can be used for installation as the holder will be left on the bike between uses.

- Attaching phone to holder – The holder should securely grip the phone without inhibiting any of its function, like covering up the charge port or the screen. The phone must be installable into the holder within seconds without a secondary tool.

- Adjustability – The holder must be able to lock the phone in a vertical or horizontal orientation, which can be changed at any point during a ride. Additional degrees of freedoms, such as the viewing angle, are welcome but not required.

# My Model

The bike mount model can be found below:

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6e950f33487dcb0240?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

▪ A description of top-down modeling and how it was leveraged in this
assignment.
▪ Rationale behind your design
▪ Assembly instructions
▪ Material choice
o Be sure to check spelling and formatting of portfolio entry.

The idea was inspired by [Quad Lock](https://www.amazon.com/Quad-Lock-Motorcycle-Handlebar-Mount/dp/B08741BFFC?th=1).
It uses three-part locking mechanism that allows the phone to be rotated into place
and secured using rubber bands. The phone is secured to the mount using a pair of
grips that conform to the iPhone 12 Pro contour, and are tensioned by rubber bands.

The design started with modeling the handlebars (25 mm). An symmetric set of upper
and lower mounts were created, sized for M6 bolts. These mounts are composed of two
parts each: a rigid frame with the M6 mounting holes, and a flexible grip that
contacts the handlebars. The flexible component is designed to be printed separately
and pressed into place.

A swivel plate with 4 arms is extruded from the upper mount and interlocks with
a matching cutout in the phone plate. The phone plate has two slots for phone grips
to slide into and provide tension on the phone.


## Iteration

A first draft of the design was printed and assessed. The PLA used for the rigid
components was subpar, causing layer delamination within the components. The
broken parts were reprinted and fillets were added in the critical regions that
broke.

## Print Settings

Flexible Element

- Material: Polymaker TPU 95A
- Temperature: 230 C Hotend, 50 C Bed
- Slicing: -0.4 mm horizontal compensation for press fit
- Printer: Monoprice Mini Delta V1 w/ 0.4 mm nozzle

Rigid Elements

- Material: Polymaker PLA
- Temperature: 220 C Hotend, 60 C Bed
- Slicing: -0.05 mm horizontal compensation for dimensional accuracy
- Printer: Ender 3 Pro w/ 0.4 mm nozzle, Bambu P1P w/ 0.4 mm nozzle

# Media

{% include gallery caption="Cross-Section of Locking Mechanism, Locking Mechanism Up-close, First Draft Print, Final Print in Action." %}
