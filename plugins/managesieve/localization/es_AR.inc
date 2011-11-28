<?php

$labels = array();
$labels['filters'] = 'Filtros';
$labels['managefilters'] = 'Administrar filtros de correo entrante';
$labels['filtername'] = 'Nombre del filtro';
$labels['newfilter'] = 'Nuevo filtro';
$labels['filteradd'] = 'Agregar filtro';
$labels['filterdel'] = 'Eliminar filtro';
$labels['moveup'] = 'Mover arriba';
$labels['movedown'] = 'Mover abajo';
$labels['filterallof'] = 'coinidir con todas las reglas siguientes';
$labels['filteranyof'] = 'coincidir con alguna de las reglas siguientes';
$labels['filterany'] = 'todos los mensajes';
$labels['filtercontains'] = 'contiene';
$labels['filternotcontains'] = 'no contiene';
$labels['filteris'] = 'es igual a';
$labels['filterisnot'] = 'no es igual a';
$labels['filterexists'] = 'existe';
$labels['filternotexists'] = 'no existe';
$labels['filterunder'] = 'bajo';
$labels['filterover'] = 'sobre';
$labels['addrule'] = 'Agregar regla';
$labels['delrule'] = 'Eliminar regla';
$labels['messagemoveto'] = 'Mover mensaje a';
$labels['messageredirect'] = 'Redirigir mensaje a';
$labels['messagecopyto'] = 'Copiar mensaje a';
$labels['messagesendcopy'] = 'Enviar copia del mensaje a';
$labels['messagereply'] = 'Responder con un mensaje';
$labels['messagedelete'] = 'Eliminar mensaje';
$labels['messagediscard'] = 'Descartar con un mensaje';
$labels['messagesrules'] = 'Para el correo entrante:';
$labels['messagesactions'] = '... ejecutar las siguientes acciones:';
$labels['add'] = 'Agregar';
$labels['del'] = 'Eliminar';
$labels['sender'] = 'Remitente';
$labels['recipient'] = 'Destinatario';
$labels['vacationaddresses'] = 'Lista de direcciones de correo de destinatarios adicionales (separados por comas):';
$labels['vacationdays'] = 'Cada cuanto enviar mensajes (en días):';
$labels['vacationreason'] = 'Cuerpo del mensaje (razón de vacaciones):';
$labels['rulestop'] = 'Parar de evaluar reglas';
$labels['filterset'] = 'Conjunto de filtros';
$labels['filtersetadd'] = 'Agregar conjunto de filtros';
$labels['filtersetdel'] = 'Eliminar conjunto de filtros';
$labels['filtersetact'] = 'Activar conjunto de filtros';
$labels['filtersetdeact'] = 'Deactivar conjunto de filtros';
$labels['filtersetget'] = 'Descargar conjunto de filtros en archivo de texto';
$labels['filterdef'] = 'Definicion del conjunto de filtros';
$labels['filtersetname'] = 'Nombre del conjunto de filtros';
$labels['newfilterset'] = 'Nuevo conjunto de filtros';
$labels['active'] = 'Activar';
$labels['none'] = 'none';
$labels['fromset'] = 'desde conjunto';
$labels['fromfile'] = 'desde archivo';
$labels['filterdisabled'] = 'Filtro deshabilitado';

$messages = array();
$messages['filterunknownerror'] = 'Error desconocido de servidor';
$messages['filterconnerror'] = 'Imposible conectar con el servidor managesieve';
$messages['filterdeleteerror'] = 'Imposible borrar filtro. Ha ocurrido un error en el servidor';
$messages['filterdeleted'] = 'Filtro borrado satisfactoriamente';
$messages['filterdeleteconfirm'] = '¿Realmente desea borrar el filtro seleccionado?';
$messages['filtersaved'] = 'Filtro guardado satisfactoriamente';
$messages['filtersaveerror'] = 'Imposible guardar ell filtro. Ha ocurrido un error en el servidor';
$messages['ruledeleteconfirm'] = '¿Está seguro de que desea borrar la regla seleccionada?';
$messages['actiondeleteconfirm'] = '¿Está seguro de que desea borrar la acción seleccionada?';
$messages['forbiddenchars'] = 'Caracteres prohibidos en el campo';
$messages['cannotbeempty'] = 'El campo no puede estar vacío';
$messages['setactivateerror'] = 'Imposible activar el conjunto de filtros. Error en el servidor.';
$messages['setdeactivateerror'] = 'Imposible desactivar el conjunto de filtros. Error en el servidor.';
$messages['setdeleteerror'] = 'Imposible eliminar el conjunto de filtros. Error en el servidor.';
$messages['setactivated'] = 'Conjunto de filtros activados correctamente';
$messages['setdeactivated'] = 'Conjunto de filtros desactivados correctamente';
$messages['setdeleted'] = 'Conjunto de filtros eliminados correctamente';
$messages['setdeleteconfirm'] = '¿Esta seguro, que quiere eliminar el conjunto de filtros seleccionado?';
$messages['setcreateerror'] = 'Imposible crear el conjunto de filtros. Error en el servidor.';
$messages['setcreated'] = 'Conjunto de filtros creados correctamente';
$messages['emptyname'] = 'Imposible crear el conjunto de filtros. Nombre del conjunto de filtros vacio';
$messages['nametoolong'] = 'Imposible crear el conjunto de filtros. Nombre del conjunto de filtros muy largo';

?>