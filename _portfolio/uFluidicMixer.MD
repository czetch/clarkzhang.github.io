---
title: "Two-Inlet Microfluidic Mixing Device"
excerpt: "Printed in ABS, using COTS Parts, powered by Arduino"
header:
  image: /assets/img/uFluidic_Snapshot.jpg
  teaser: /assets/img/uFluidic_Snapshot.jpg

---

# Introduction

Microfluidic devices are miniature systems that manipulate small volumes of liquids,
on the order of microliters to picoliters. Devices are composed of inlets, outlets,
channels, and chambers that are etched or molded into glass or polymers.

Applications of fluidic devices are several fold. For example, in chemistry,
mixing devices can be used to control the rate chemical reactions, or detecting
particular properties of fluids. In biology and medicine, they are used to mix
and sort cell cultures, or detection of pathogens.

## Mixing

Fluid mixing at a micro-scale poses several new challenges that require innovative solutions
to overcome. Since the size of channels is small, the Reynolds number for any
fluid in such devices is low, leading to primarily laminal flow regimes. The relative
size of the fluid particles is large compared to the channels, causing the fluid
cling to the solid surfaces rather than smoothly flow.

Therefore, diffusion between adjacent fluid layers becomes the main mixing mechanism.
While diffusion is effective between thin layers, it is rather slow when used to
mix larger volumes of fluid. Thus, reducing the thickness of layers or increasing
the number of layers in lamination would improve the effectiveness of diffusion.

# Design Specifications

- There must be at least 2 mixing sections, one by each team member. Each mixing
section must contain some type of 3D geometry - not just a simple upward extrusion
from a sketch (e.g., a zig-zag channel). A mixing section can contain multiple types of
geometries.

- No dead zones. The fluid flow will take the most direct path to the exit. Channels that
double back on themselves or intersect may lead to a different path than expected.
Trace your finger through the design, if you skip over a geometry due to a quicker path
to the exit, then you have a dead zone.

- The device, when molded, must be precisely 25 mm wide by 75 mm long to sit flush on a
common microscope slide.

- Tall and thin components are likely to break off during printing, post-processing, or
demolding. Aspect ratio is the height to cross-sectional width or length (whichever is
smaller) of a printed feature. Keep the aspect ratio less than 4:1. For example a feature
that is 1.5 mm in diameter should be no taller than 6 mm.

- For inlets and outlets, use a 1.5 mm post extruded above the top of the mold. This will
create a hole that is compatible with the microfluidic barb (see image below).

- Channels should be at least 4 mm away from the edge of the device or else leaking will
occur.

- The design may draw inspiration from online models, but it must be unique in its
combination of mixing elements in its entirety.

- Do not include internal features that cannot be de-molded. This includes cutbacks and
small holes (< 0.5 mm).

## Our Device

Our device is composed of two main sections. In the first section, there is a
inclined mixer channel that leads into a spiraled set of intersecting channels.
In the second section, a Tesla valve with an oblique mixer is used. For both sections,
channel size was standardized to 1 mm by 1 mm to keep the aspect ratio below 4:1.


The inclined mixing channels cause the fluid to sway from side to side as it
travels along channel, resulting in a more turbulent flow pattern and better mixing.

The spiral feature improves diffusion by taking advantage of the inertia of the
fluid particles. As the fluid travels around the spiral, the centripital force
the fluid on the inside of the spiral into the fluid on the outside of the channel.
Small 0.25 mm by 0.5 mm channels connect adjacent spiral paths, which increase the
number of lamination layers in the device. The spiral was maximized to fit as many
loops into the device.

The Tesla valves approach the mixing problem differently, by focusing on creating
chaotic turbulence in the device. By creating valves oriented in the reverse direction,
the fluid must loop back into itself, creating turbulance. Ten loops were chosen
that is the maximum number that could fit into the device. The oblique mixer at
the start of the Tesla valve section reduces the cross section of the channel,
increasing the Reynolds number and inducing more chaotic flow.

Our device mold can be found below:

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH512d4QTec90decfa6e24db52f3abc94ff5?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Producing the Microfluidic Device

1. Print the mold a resin printer
  - Wash finished print in IPA for 6 minutes
  - Cure in UV light for 5 seconds
  - Final mold should have a uniform matte finish.

2. Apply a thin layer of parylene to the surfaces of the cured mold which will be
in contact with polydimethylsiloxane (PDMS). This is critical for ensuring the PDMS
can properly peel from the mold, and so the final device is biocompatible.

3. Pour PDMS onto the parylene-coated mold. Pour slowly and carefully so that all
the microfeatures are filled. Wait for the PDMS to cure.

4. Plasma bond a glass slide to the PDMS cast. This step completes the device, which can
then be removed from the mold.

# Discussion

The device was tested by injecting green and red fluid at 1 mL/min. The majority
of the mixing was completed after passing through the spiral section. The Tesla valve
proceeded to fully mix the fluid after two loops. The output fluid is a uniform color.
Both sections trapped some air bubbles, but not as many compared to other devices.

# Media

## Device Mold

{% include figure include='assets/img/uFluidic_Mold.jpg' %}

![Device Mold](assets/img/uFluidic_Mold.jpg)

## Completed Device
![Completed Device](/assets/img/uFluidic_Device.jpg)

## Device in Action
![Device in action](/assets/img/uFluidic_Snapshot.jpg)

![](assets/uFluidic_movie.mov)

# References

1. Lee CY, Chang CL, Wang YN, Fu LM. Microfluidic mixing: a review. Int J Mol Sci. 2011;12(5):3263-87. [https://doi.org/10.3390/ijms12053263](https://doi.org/10.3390/ijms12053263). Epub 2011 May 18. PMID: 21686184; PMCID: PMC3116190.

2. Yang, S., Jiang, W., Chen, C., Ma, Y., & Lin, B. (2021). A Rapid prototyping of cell culture microdevices using parylene-coated 3D prints. Lab on a Chip, 2021,21, 4814-4822. [https://doi.org/10.1039/D1LC00744K](https://doi.org/10.1039/D1LC00744K)
