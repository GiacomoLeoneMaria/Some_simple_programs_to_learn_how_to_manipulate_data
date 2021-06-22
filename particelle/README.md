The file particles.dat, contains the description of an unknown number of point particles in R^2 . Each particle is described by a quadruple
(x(t0 ), y(t0 ), vx, vy). The pair (x(t0 ), y(t0 )) represents the coordinates of the particle, at a certain instant of time t0 with respect to an assigned Cartesian reference system, vx and vy are instead the components of the velocity vector of the particle, which we consider constant in time, with respect to the same reference system. All data described so far are float type.
Let's read the file particles.dat and load it in a vector of particle structures. 

We eliminate from the vector loaded in the previous step all particles that at the time instant t0 are NOT within the rectangle (including perimeter) having lower left vertex at point (-1, -0.5) and upper right vertex at point (1, 0.5). 

We print the inside and outside particles with their descriptions.

We compute the position at time t0 + ∆t with ∆t = 1.5 of all particles that survived the selection made in the previous step. Recall that
x(t0 + ∆t) = x(t0) + vx - ∆t
y(t0 + ∆t) = y(t0) + vy - ∆t.

Count how many of these particles ended up in the rectangle described above at the final time t0 + ∆t.
