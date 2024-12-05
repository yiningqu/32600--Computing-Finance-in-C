// part (b)


/* Eager Initialization is to create objects(currencies) ahead of time,
 * and lazy initialization is to create one when we need it for the first time.
 *
 * The benefit of eager initialization is that we do not need to create the same object
 * again when we have already created. We can store Currency objects in a container(array)
 * and reuse them. The drawback is that we will create some objects that we will never use.
 *
 * The benefit of lazy initialization is that we will not create objects that we will never use.
 * The drawback is that we have to create the same Currency object more than once.
 * For example, when we already have
 * Currency c = Currency("US", "United States", 1.0)
 * When we want to have Currency y = Currency("US", "United States", 1.0), we have to
 * create the same Currency object again instead of using it directly.
 */
