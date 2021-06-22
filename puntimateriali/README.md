The file points.dat contains the description of an unspecified number of material points in R^2 . Each point is described by the tern (x, y, m) where x and y are the coordinates of the point and m is its mass.
y are the coordinates of the point and m is its mass; x, y and m are of type float.

We determine the minimum and maximum x-coordinate of the loaded points.

We calculate the center of mass (barycenter) (xc , yc ) of the system of material points
materials.

We sort the vector in order of increasing distance from the center of gravity. 

We calculate the mean and standard deviation σ of the distances from the barycenter.

We eliminate from the vector all points that are more than 2σ away from the barycenter.

Translated with www.DeepL.com/Translator (free version)
