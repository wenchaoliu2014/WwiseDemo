using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerOnGunHit1 : AkTriggerBase

{

    public void Hit()

    {

        if(triggerDelegate != null) 

        {

            triggerDelegate(null);

        }

    }

}
