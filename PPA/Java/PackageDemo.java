import Marvellous.PPA;
import Marvellous.LB;
import Marvellous.infosystems.Python;

class PackageDemo {
    public static void main(String[] args) {
        PPA pobj = new PPA();
        LB lobj = new LB();
        Python pyobj = new Python();

        pobj.PPA_Fun();
        lobj.LB_Fun();
        pyobj.Python_Fun();
    }
}