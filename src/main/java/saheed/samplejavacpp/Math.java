package saheed.samplejavacpp;

import org.bytedeco.javacpp.*;
import org.bytedeco.javacpp.annotation.*;

/*
 * Place code in accessible place
 * Add references and imports
 * Include the path to the code
 * declare native methods
 * Call Loader.load() statically
 */

@Platform(include="resources/MathApp2/Math.h")
public class Math {
	native int add(int a, int b);
    native int subtract(int a, int b);
    native int multiply(int a, int b);
    
    static {
        Loader.load();
    }
}
