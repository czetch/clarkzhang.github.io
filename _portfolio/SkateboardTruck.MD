---
title: "Generative-design Skateboard Trucks"
excerpt: "SLS Nylon Powder-printed"
header:
  image: /assets/img/TruckRender.png
  teaser: /assets/img/TruckGenerative.png
gallery:
  - image_path: assets/img/TruckFront.png
    alt: 'Truck Front'
  - image_path: assets/img/TruckBack.png
    alt: 'Truck Back'
  - image_path: assets/img/TruckMounted.png
    alt: 'Truck Mounted on Skateboard'
  - image_path: assets/img/TruckGenerative.png
    alt: 'Generative Design Study'
---


For both the Nylon 12 and ALSi10Mg solutions include:
o An embedded Fusion 360 model
o A rendering of the completed longboard assembly with the generative design
trucks.
• Real life images of whichever model was SLS printed attached to the longboard desk.
• A discussion (750 words) on the unique pairing of powder bed fusion and generative
design and their applications in either aerospace or automotive industries.
CHBE 4200
4
o Critique generative design. How useful is it really? What are the drawbacks?
What applications would generative design be most useful in?

# Introduction

Generative design is a cutting-edge tool in engineering by leveraging optimization
algorithms to create complex structures. It is an iterative design process that
creates outputs to meet specific constraints and goals. In Fusion360, these goals
can be minimizing mass or maximizing stiffness; the constraints are split into
preserve geometries and obstacle geometries. Loads cases and fixtures are added
in as well. Then, the algorithm begins connecting the preserve geometry while
avoiding the obstacle geometries, and iteratively removes material that is not
significantly contributing to the part strength. This technique is vastly different
from traditional design techniques as it explores vast design spaces that cannot be
conceived by humans. This process yields organic, lightweight, and structurally
optimized designs, minimizing material usage while maximizing performance.

## Powder Bed Fusion

Powder bed fusion (PBF) is an additive manufacturing technique that utilizes a layer-by-layer
approach to fuse together a fine powder into intricate components. With Nylon powder,
the printed part can suspended in the powder without the use of supports, and only
needs to be depowdered after removal. SLS eliminates many constraints found in
traditional manufacturing technique, such as 3-axis CNC (although generative designs
can be adapted for traditional manufacturing techniques), facilitating the full
power of generative design.

## Applications in Aerospace

In the aerospace industry, where weight reduction is paramount for fuel efficiency
and performance, generative design and PBF are ideal for producing optimized parts.
Generative designs can create aerospace components with optimized load-bearing structures,
leading to significant weight savings without compromising strength or functionality.
PBF then materializes these bespoke designs with precision.

For example, engine manufacturers can employ generative design to create lightweight
turbine blades with internal cooling channels. PBF enables the fabrication of
these complex geometries with integrated precise cooling pathways for enhanced
thermal management and overall efficiency.

## Applications in Automotive Engineering

In the automotive industry, generative design coupled with PBF is reshaping
vehicle design. By optimizing components for high strength-to-weight ratios,
generative design enables the creation of lightweight structures essential for vehicle
range and performance, such as in chassis components. PBF then translates these designs into reality, offering
automotive companies the ability to iterate rapidly and customize parts according
to specific vehicle models or performance requirements.

## Critiques

Generative design offers significant advantages in optimizing structures,
fostering innovation, and saving time and costs. However, setting up a generative
study requires a high degree of understanding of the desired component, and
effectively inputting the required loads, obstacles, and other parameters. Furthermore,
due to its novelty and impact, a large amount of computational resources are  required
to run a generative study. But despite its drawbacks, careful application of
generative design can yield transformative results in various sectors.

# Skateboard Trucks

The goal of this generative design project is to create a lightweight truck
hanger with an integrated motor mount for a brushless DC motor. Students will explore the GD
outcomes for two separate materials: Nylon 12 and ALSi10Mg, a commonly printed aluminum
alloy. Students will comment on how generative design can be used to lightweight parts not
only for the longboards but for industrial applications as well.

## Design Specifications

- The hanger must fit over the kingpin and properly seat into the base plate.

- The max part size that can be printed on the Fuse 1 is 160 mm x 160 mm x 290 mm. If
the motor mounting plate extends too far away from the hanger, then the part will be
too big to print.

- The outside diameter of the drive belt is 285 mm. The motor must be mounted such
that the belt can be made tight. This is usually accomplished by having slots for the
motor to slide back and forth in the mounting plate before tightening the fasteners all
the way. An alternative method is to use an idler to press down and tension the belt.

- The hanger must have an 8.2 mm through hole to accept the steel axle that supports the
wheels.

- Be sure there is enough clearance between the hanger and the ground for the wheel to
touch and spin. It is recommended to have a complete longboard assembly with your
generative design truck to check for any errors prior to printing.

- The wheels uses 608ZZ bearings, and consequently, the part of the hanger touching the
wheel/bearing can be no larger in diameter than 18 mm or it will bridge both the inner
and outer races of the bearings, preventing it from spinning.

- If the motor is too low to the ground then it will limit ground clearance of the board, but
if it is too high then it will prevent the deck from leaning during turning.

- Do not preserve the entire motor mounting plate. We want the solution to include
different ways to connect the motor to the truck.

- Make sure motor can move back and forth ~4mm to allow for tensioning of the belt.

## Generative Design Parameters

- Assigning loads to the longboard design can be difficult even for students with a
mechanical background.
- Design Criteria: Minimize Mass
- Manufacturing method: Unrestrictive
- Materials: Nylon 12, ALSi10Mg



## Nylon Trucks

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6eae84bcc38dc69c3b?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6e85827174a9ea54de?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Aluminum Trucks

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6ed332c3a0551de4e4?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6e336766fde9b4e51d?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Media

{% include gallery caption="Truck Front, Truck Back, Truck Mounted on Skateboard, Generative Design Study." %}
