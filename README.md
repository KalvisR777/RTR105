# RTR105
# Datorzinības (pamatkurss) elektroniskā klade


*Otrā nodarbība iepazīšanās ar shell komandām.*

    Šīs komandas ir ekvivalentas parastai datorpeles izmantošanai un keyboard shortcut lietošanai. Atkarībā, ko meklē/ vēlas izdarīt, 
    komandas var būt daudz ātrākas un parocīgākas. Ar komandām bieži vien procesiem var izlaist vairākus liekus soļus. Piemēram, ar komandu "wget"
    var lejuplādēt jebkuru failu no interneta, pēc "wget" ierakstot saiti. Ar history komandu, var redzēt iepriekš veiktās komandas. Uz windows vai
    mac platformas nevar izsekot iepriekšējās pārvietošanās pa failu direkciju. Ņemot vērā, ka izmantojot komandu "top" var apskatīt izmantotos datora
    resursus, var optimizēt uzdxevumus, uz kuriem tierk izmantota datora jauda. Tātad, kā jau iepriekš zināms, linux var izmantot uz veciem datoriem,
    lai tie būtu ātrāki. Ctrl + C pārtauks komandu, kamēr Ctrl + Z nopauzēs komandu. Ctrl Q atcels pēdējo darbību. Jāņem vērā, ka šie shortcuts atšķiras
    no mac vai windows platformām.

*trešā nodarbība iepazīšanās ar kompilēšanas procesa soļiem.*

    C programēšanas valodai ir vairāki soļi kompilēšanas procesam. Kompilēšanas procesa mērķis ir pārcērst C kodu, kas ir saprotams 
    cilvēkas uz kodu, kas sastāv no bitiem, kas saprotams ciparu elektroniskajām ierīcēm. Šos atsevišķos soļus var izmantot lai izprastu koda darbību vai 
    pat atrastu kļūdas. Piemēram, ar "hexdump" var apskatīr katru koda baitu. Rakstītais kods vispirms tiek nodots priekšprocesoram, tad priekšprocesors 
    paplašina šo kodu. Pēc paplašināšanas, kods tiek nodots kompilatoram. C kompilators pārvērš iepriekš apstrādāto kodu montāžas kodā. Tas tiek pārvērsts
    objekta kodā, izmantojot montētāju. Jaunā faila nosaukums ir tāds pats kā sākuma failam. Objekta faila paplašinājums ir ".obj". Piemēram, ja avota faila         
    nosaukums ir “first_code.c”, tad objekta faila nosaukums būtu “first_code.obj”. Linker posms kompilācijas procesā saista faila objekta kodu ar  programmu. Tas 
    apvieno vairākos starpfailus lai radītu datoram saprotamu kodu.
