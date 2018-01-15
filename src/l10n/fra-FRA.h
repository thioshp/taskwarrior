////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// This file contains all the strings that should be localized.  If a string is
// *not* in this file, then either:
//   (a) it should not be localized, or
//   (b) you have found a bug - please report it
//
// Strings that should be localized:
//   - text output that the user sees
//
// Strings that should NOT be localized:
//   - .taskrc configuration variable names
//   - command names
//   - extension function names
//   - certain literals associated with parsing
//   - debug strings
//   - attribute names
//   - modifier names
//   - logical operators (and, or, xor)
//
// Rules:
//   - Localized strings should not in general  contain leading or trailing
//     white space, including \n, thus allowing the code to compose strings.
//   - Retain the tense of the original string.
//   - Retain the same degree of verbosity of the original string.
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// Translators:
//   1. Copy this file (eng-USA.h) to a new file with the target locale as the
//      file name.  Using German as an example, do this:
//
//        cp eng-USA.h deu-DEU.h
//
//   2. Modify all the strings below.
//        i.e. change "Unknown error." to "Unbekannter Fehler.".
//
//   3. Add your new translation to the task.git/src/i18n.h file, if necessary,
//      by inserting:
//
//        #elif PACKAGE_LANGUAGE == LANGUAGE_DEU_DEU
//        #include <deu-DEU.h>
//
//   4. Add your new language to task.git/CMakeLists.txt, making sure that
//      number is unique:
//
//        set (LANGUAGE_DEU_DEU 3)
//
//   5. Add your new language to task.git/cmake.h.in:
//
//        #define LANGUAGE_DEU_DEU ${LANGUAGE_DEU_DEU}
//
//   6. Build your localized Taskwarrior with these commands:
//
//      cd task.git
//      cmake -D LANGUAGE=3 .
//      make
//
//   7. Submit your translation to support@taskwarrior.org, where it will be
//      shared with others.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "Traduction française"
#define STRING_LOCALIZATION_AUTHOR   "Traduit en français par Leowzukw et Jeremy John Reeder."

// Parser
#define STRING_PARSER_ALIAS_NEST     "Atteignit la limite d'amboîtage des pseudonymes, {1}."
#define STRING_PARSER_OVERRIDE_RC    "Configuration écrasée : rc.{1}:{2}"
#define STRING_PARSER_UNKNOWN_ATTMOD "Erreur : attribut de modification non reconnu '{1}'."
#define STRING_PARSER_ALTERNATE_RC   "Utilise un fichier .taskrc alternatif : {1}"
#define STRING_PARSER_ALTERNATE_DATA "Utilise une data.location alternative : {1}"
#define STRING_PARSER_UNEXPECTED_ARG "The '{1}' command does not allow '{2}'."

// Color
#define STRING_COLOR_UNRECOGNIZED    "La couleur '{1}' n'est pas reconnue."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Nom de colonne non reconnu '{1}'."
#define STRING_COLUMN_BAD_FORMAT     "Format de colonne non reconnu '{1}.{2}'"
#define STRING_COLUMN_LABEL_TASKS    "Tâches"
#define STRING_COLUMN_LABEL_DEP      "Dépends de"
#define STRING_COLUMN_LABEL_DEP_S    "Dép"
#define STRING_COLUMN_LABEL_DESC     "Description"
#define STRING_COLUMN_LABEL_DUE      "Échéance"
#define STRING_COLUMN_LABEL_END      "Fin"
#define STRING_COLUMN_LABEL_ENTERED  "Entrée"
#define STRING_COLUMN_LABEL_COUNT    "Temps restant"
#define STRING_COLUMN_LABEL_COMPLETE "Complétée"
#define STRING_COLUMN_LABEL_MOD      "Modifiée"
#define STRING_COLUMN_LABEL_ADDED    "Ajoutée"
#define STRING_COLUMN_LABEL_AGE      "Age"
#define STRING_COLUMN_LABEL_ID       "ID"
#define STRING_COLUMN_LABEL_PROJECT  "Projet"
#define STRING_COLUMN_LABEL_UNTIL    "Until"
#define STRING_COLUMN_LABEL_WAIT     "Attente"
#define STRING_COLUMN_LABEL_WAITING  "En attente jusqu’au"
#define STRING_COLUMN_LABEL_RECUR    "Récur"
#define STRING_COLUMN_LABEL_RECUR_L  "Récurrence"
#define STRING_COLUMN_LABEL_START    "Début"
#define STRING_COLUMN_LABEL_STARTED  "Débutée"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Statut"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Prévue"
#define STRING_COLUMN_LABEL_STAT_CO  "Complétée"
#define STRING_COLUMN_LABEL_STAT_DE  "Supprimée"
#define STRING_COLUMN_LABEL_STAT_WA  "En attente"
#define STRING_COLUMN_LABEL_STAT_RE  "Récurrente"
#define STRING_COLUMN_LABEL_STAT_P   "P"
#define STRING_COLUMN_LABEL_STAT_C   "C"
#define STRING_COLUMN_LABEL_STAT_D   "S"
#define STRING_COLUMN_LABEL_STAT_W   "A"
#define STRING_COLUMN_LABEL_STAT_R   "R"
#define STRING_COLUMN_LABEL_TAGS     "Étiquettes"
#define STRING_COLUMN_LABEL_TAG      "Étiq"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urgence"
#define STRING_COLUMN_LABEL_NAME     "Nom"
#define STRING_COLUMN_LABEL_VALUE    "Valeur"
#define STRING_COLUMN_LABEL_PARENT   "Tâche mère"
#define STRING_COLUMN_LABEL_DATE     "Date"
#define STRING_COLUMN_LABEL_COLUMN   "Colonnes"
#define STRING_COLUMN_LABEL_STYLES   "Formats supportés"
#define STRING_COLUMN_LABEL_EXAMPLES "Exemple"
#define STRING_COLUMN_LABEL_SCHED    "Planifiée"
#define STRING_COLUMN_LABEL_UDA      "Nom"
#define STRING_COLUMN_LABEL_TYPE     "Type"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Étiq"
#define STRING_COLUMN_LABEL_DEFAULT  "Défaut"
#define STRING_COLUMN_LABEL_VALUES   "Valeurs autorisées"
#define STRING_COLUMN_LABEL_UDACOUNT "Compte d’utilisation"
#define STRING_COLUMN_LABEL_ORPHAN   "ADU orphelins"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "maison @routine next"
#define STRING_COLUMN_EXAMPLES_PROJ  "maison.jardin"
#define STRING_COLUMN_EXAMPLES_PAR   "maison"
#define STRING_COLUMN_EXAMPLES_IND   "  maison.jardin"
#define STRING_COLUMN_EXAMPLES_DESC  "Move your clothes down on to the lower peg"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Juste avant votre repas"
#define STRING_COLUMN_EXAMPLES_ANNO2 "If you are playing in the match this afternoon"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Before you write your letter home"
#define STRING_COLUMN_EXAMPLES_ANNO4 "If you're not getting your hair cut"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_CONFLICT          "Le rapport personnalisé '{1}' entre en conflit avec une commande prédéfinie de task."
#define STRING_CMD_VERSION_USAGE     "Affiche le numéro de version de taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Affiche uniquement le numéro de version de taskwarrior"
#define STRING_CMD_VERSION_MIT       "Taskwarrior ne peut être copié que selon les termes de la licence MIT, qui peuvent être trouvés dans les sources de taskwarrior."
#define STRING_CMD_VERSION_DOCS      "On peut trouver les documents de taskwarrior en utilisant 'man task', 'man taskrc', 'man task-color', 'man task-sync', ou chez http://taskwarrior.org"
#define STRING_CMD_VERSION_BUILT     "{1} {2} compilé pour "
#define STRING_CMD_VERSION_UNKNOWN   "inconnu"
#define STRING_CMD_VERSION_COPY      "Copyright (C) 2006 - 2018 P. Beckingham, F. Hernandez."
#define STRING_CMD_LOGO_USAGE        "Affiche le logo de Taskwarrior"
#define STRING_CMD_LOGO_COLOR_REQ    "La commande logo nécessite le support des couleurs."
#define STRING_CMD_EXEC_USAGE        "Lance les commandes et les scripts externes."
#define STRING_CMD_URGENCY_USAGE     "Affiche l'indice d'urgence de la tâche"
#define STRING_CMD_URGENCY_RESULT    "task {1} urgency {2}"
#define STRING_CMD_ADD_USAGE         "Ajoute une nouvelle tâche"
#define STRING_CMD_ADD_FEEDBACK      "Tâche {1} crée."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Adds a new task that is already completed"
#define STRING_CMD_LOG_NO_RECUR      "Vous ne pouvez pas journaliser une tâche récurrente."
#define STRING_CMD_LOG_NO_WAITING    "Vous ne pouvez pas journaliser une tâche en attente."

//#define STRING_CMD_LOG_LOGGED        "Tâche journalisée."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Affiche les IDs des tâches correspondantes, comme une plage"
#define STRING_CMD_IDS_USAGE_LIST    "Affiche les IDs des tâches correspondantes, sous forme de liste"
#define STRING_CMD_IDS_USAGE_ZSH     "Affiche les IDs  et les descriptions des tâches correspondantes"
#define STRING_CMD_UDAS_USAGE        "Affiche les détails de tous les ADUs définis"
#define STRING_CMD_UDAS_COMPL_USAGE  "Affiche les ADUs définis, pour la complétion"
#define STRING_CMD_UUIDS_USAGE_RANGE "Affiche le UUIDs des tâches correspondantes, comme une liste séparée par des virgules"
#define STRING_CMD_UUIDS_USAGE_LIST  "Affiche le UUIDs des tâches correspondantes, comme une liste"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Affiche le UUIDs et les descriptions des tâches correspondantes"
#define STRING_CMD_EXPORT_USAGE      "Exporte les tâches au format JSON"
#define STRING_CMD_INFO_USAGE        "Affiche toutes les données et méta-données"
#define STRING_CMD_INFO_BLOCKED      "Cette tâche est bloquée par"
#define STRING_CMD_INFO_BLOCKING     "Cette tâche bloque"
#define STRING_CMD_INFO_UNTIL        "Jusqu'au"
#define STRING_CMD_INFO_MODIFICATION "Modification"
#define STRING_CMD_INFO_MODIFIED     "Dernier modifié"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Annule les changements les plus récents sur une tâche"
#define STRING_CMD_STATS_USAGE       "Affiche les statistiques de la base de donnée"
#define STRING_CMD_STATS_CATEGORY    "Catégorie"
#define STRING_CMD_STATS_DATA        "Données"
#define STRING_CMD_STATS_TOTAL       "Total"
#define STRING_CMD_STATS_ANNOTATIONS "Annotations"
#define STRING_CMD_STATS_UNIQUE_TAGS "Étiquettes uniques"
#define STRING_CMD_STATS_PROJECTS    "Projets"
#define STRING_CMD_STATS_DATA_SIZE   "Taille des données"
#define STRING_CMD_STATS_UNDO_TXNS   "Transactions de défaire"
#define STRING_CMD_STATS_BACKLOG     "Sync backlog transactions"
#define STRING_CMD_STATS_TAGGED      "Tâches étiquetées"
#define STRING_CMD_STATS_OLDEST      "Tâche la plus ancienne"
#define STRING_CMD_STATS_NEWEST      "Tâche la plus récente"
#define STRING_CMD_STATS_USED_FOR    "Taskwarrior utilisé depuis"
#define STRING_CMD_STATS_ADD_EVERY   "Tâche ajoutée tous les"
#define STRING_CMD_STATS_COMP_EVERY  "Tâche terminée tous les"
#define STRING_CMD_STATS_DEL_EVERY   "Tâche supprimée tous les"
#define STRING_CMD_STATS_AVG_PEND    "Durée moyenne d'activité"
#define STRING_CMD_STATS_DESC_LEN    "Longueur moyenne des descriptions"
#define STRING_CMD_STATS_CHARS       "{1} caractères"
#define STRING_CMD_STATS_BLOCKED     "Tâches bloquées"
#define STRING_CMD_STATS_BLOCKING    "Tâches bloquantes"
#define STRING_CMD_REPORTS_USAGE     "Liste tous les rapports supportés"
#define STRING_CMD_REPORTS_REPORT    "Rapport"
#define STRING_CMD_REPORTS_DESC      "Description"
#define STRING_CMD_REPORTS_SUMMARY   "{1} rapports"
#define STRING_CMD_TAGS_USAGE        "Affiche une liste de toutes les étiquettes utilisées"
#define STRING_CMD_COMTAGS_USAGE     "Affiche uniquement une liste des étiquettes utilisées, pour la complétion"
#define STRING_CMD_TAGS_SINGLE       "1 étiquette"
#define STRING_CMD_TAGS_PLURAL       "{1} étiquettes"
#define STRING_CMD_TAGS_NO_TAGS      "Pas d'étiquettes."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Shows a report of task history, by month"
#define STRING_CMD_HISTORY_YEAR      "Année"
#define STRING_CMD_HISTORY_MONTH     "Mois"
#define STRING_CMD_HISTORY_ADDED     "Ajoutées"
#define STRING_CMD_HISTORY_COMP      "Achevées"
#define STRING_CMD_HISTORY_DEL       "Supprimées"
#define STRING_CMD_HISTORY_NET       "Net"
#define STRING_CMD_HISTORY_USAGE_A   "Montre un rapport de l'histoire des tâches, par an"
#define STRING_CMD_HISTORY_AVERAGE   "Moyenne"
#define STRING_CMD_HISTORY_LEGEND    "Légende : {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legend: + added, X completed, - deleted"
#define STRING_CMD_GHISTORY_USAGE_M  "Shows a graphical report of task history, by month"
#define STRING_CMD_GHISTORY_USAGE_A  "Montre un rapport graphique de l'histoire des tâches, par an"
#define STRING_CMD_GHISTORY_YEAR     "An"
#define STRING_CMD_GHISTORY_MONTH    "Mois"
#define STRING_CMD_GHISTORY_NUMBER   "Number Added/Completed/Deleted"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_DONE_USAGE        "Marque la tâche spécifiée comme terminée"
#define STRING_CMD_DONE_CONFIRM      "Terminer la tâche {1} '{2}'?"
#define STRING_CMD_DONE_TASK         "Tâche {1} '{2}' terminée."
#define STRING_CMD_DONE_NO           "Tâche non terminée."
#define STRING_CMD_DONE_NOTPEND      "Tâche {1} '{2}' n'est plus ni en cours, ni en attente."
#define STRING_CMD_DONE_1            "{1} tâche terminée."
#define STRING_CMD_DONE_N            "{1} tâches terminées."

#define STRING_CMD_PROJECTS_USAGE    "Shows all project names used"
#define STRING_CMD_PROJECTS_USAGE_2  "Shows only a list of all project names used"
#define STRING_CMD_PROJECTS_NO       "No projects."
#define STRING_CMD_PROJECTS_NONE     "(none)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} project"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} projects"
#define STRING_CMD_PROJECTS_TASK     "({1} task)"
#define STRING_CMD_PROJECTS_TASKS    "({1} tasks)"
#define STRING_CMD_SUMMARY_USAGE     "Shows a report of task status by project"
#define STRING_CMD_SUMMARY_PROJECT   "Project"
#define STRING_CMD_SUMMARY_REMAINING "Remaining"
#define STRING_CMD_SUMMARY_AVG_AGE   "Avg age"
#define STRING_CMD_SUMMARY_COMPLETE  "Complete"
#define STRING_CMD_SUMMARY_NONE      "(none)"
#define STRING_CMD_COUNT_USAGE       "Compte les taches correspondantes"
#define STRING_CMD_GET_USAGE         "Accesseur au DOM"
#define STRING_CMD_GET_NO_DOM        "Aucune référence de DOM spécifié."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "Aucuns ADUs définies."
#define STRING_CMD_UDAS_SUMMARY      "{1} ADU définie"
#define STRING_CMD_UDAS_SUMMARY2     "{1} ADUs définies"
#define STRING_CMD_UDAS_ORPHAN       "{1} ADU orphelin"
#define STRING_CMD_UDAS_ORPHANS      "{1} ADUs orphelins"

#define STRING_CMD_DELETE_USAGE      "Deletes the specified task"
#define STRING_CMD_DELETE_CONFIRM    "Permanently delete task {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "Deleting task {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Deleting recurring task {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "This is a recurring task.  Do you want to delete all pending recurrences of this same task?"
#define STRING_CMD_DELETE_NO         "Tâche non supprimée."
#define STRING_CMD_DELETE_NOT_DEL    "Tâche {1} '{2}' n'est pas supprimable."
#define STRING_CMD_DELETE_1          "{1} tâche supprimée."
#define STRING_CMD_DELETE_N          "{1} tâches supprimées."

#define STRING_CMD_DUPLICATE_USAGE   "Duplique la tâche spécifiée"
#define STRING_CMD_DUPLICATE_REC     "Note : la tâche {1} était une tâche parent récurrente. Sa copie l'est aussi."
#define STRING_CMD_DUPLICATE_NON_REC "Note : la tâche {1} était une tâche récurrente. Sa copie ne l'est pas."
#define STRING_CMD_DUPLICATE_CONFIRM "Dupliquer la tâche {1} '{2}' ?"
#define STRING_CMD_DUPLICATE_TASK    "Tâche {1} '{2}' dupliquée."
#define STRING_CMD_DUPLICATE_NO      "Tâche non dupliquée"
#define STRING_CMD_DUPLICATE_1       "Duplicated {1} task."
#define STRING_CMD_DUPLICATE_N       "Duplicated {1} tasks."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Marks specified task as started"
#define STRING_CMD_START_NO          "Tâche non démarrée."
#define STRING_CMD_START_ALREADY     "Tâche {1} '{2}' déjà démarré."
#define STRING_CMD_START_TASK        "Starting task {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "Start task {1} '{2}'?"
#define STRING_CMD_START_1           "Started {1} task."
#define STRING_CMD_START_N           "Started {1} tasks."

#define STRING_CMD_STOP_USAGE        "Suppression de l'attribut 'start' d'une tâche"
#define STRING_CMD_STOP_NO           "Tâche non arrếtée"
#define STRING_CMD_STOP_ALREADY      "Tâche {1} '{2}' non arrêtée" // Étrange
#define STRING_CMD_STOP_TASK         "Arrêt de la tâche {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "Stop task {1} '{2}'?"
#define STRING_CMD_STOP_1            "Stopped {1} task."
#define STRING_CMD_STOP_N            "Stopped {1} tasks."

#define STRING_CMD_APPEND_USAGE      "Appends text to an existing task description"
#define STRING_CMD_APPEND_1          "Appended {1} task."
#define STRING_CMD_APPEND_N          "Appended {1} tasks."
#define STRING_CMD_APPEND_TASK       "Appending to task {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Appending to recurring task {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "This is a recurring task.  Do you want to append to all pending recurrences of this same task?"
#define STRING_CMD_APPEND_CONFIRM    "Append to task {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Tâche non suffixée."

#define STRING_CMD_PREPEND_USAGE     "Prepends text to an existing task description"
#define STRING_CMD_PREPEND_1         "Prepended {1} task."
#define STRING_CMD_PREPEND_N         "Prepended {1} tasks."
#define STRING_CMD_PREPEND_TASK      "Prepending to task {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Prepending to recurring task {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "This is a recurring task.  Do you want to prepend to all pending recurrences of this same task?"
#define STRING_CMD_PREPEND_CONFIRM   "Prepend to task {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Tâche not prepended."

#define STRING_CMD_ANNO_USAGE        "Adds an annotation to an existing task"
#define STRING_CMD_ANNO_CONFIRM      "Annotate task {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Annotating task {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Annotating recurring task {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "This is a recurring task.  Do you want to annotate all pending recurrences of this same task?"
#define STRING_CMD_ANNO_NO           "Tâche non annotée."
#define STRING_CMD_ANNO_1            "Annotated {1} task."
#define STRING_CMD_ANNO_N            "Annotated {1} tasks."

#define STRING_CMD_COLUMNS_USAGE     "All supported columns and formatting styles"
#define STRING_CMD_COLUMNS_NOTE      "* Means default format, and therefore optional.  For example, 'due' and 'due.formatted' are equivalent."
#define STRING_CMD_COLUMNS_USAGE2    "Displays only a list of supported columns"
#define STRING_CMD_COLUMNS_ARGS      "You can only specify one search string."

#define STRING_CMD_DENO_USAGE        "Deletes an annotation"
#define STRING_CMD_DENO_NONE         "The specified task has no annotations that can be deleted."
#define STRING_CMD_DENO_CONFIRM      "Denotate task {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Found annotation '{1}' and deleted it."
#define STRING_CMD_DENO_NOMATCH      "Did not find any matching annotation to be deleted for '{1}'."
#define STRING_CMD_DENO_NO           "Tâche non désannotée."
#define STRING_CMD_DENO_1            "Denotated {1} task."
#define STRING_CMD_DENO_N            "Denotated {1} tasks."

#define STRING_CMD_IMPORT_USAGE      "Imports JSON files"
#define STRING_CMD_IMPORT_SUMMARY    "Imported {1} tasks."
#define STRING_CMD_IMPORT_FILE       "Importing '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Annotation is missing a description: {1}"
#define STRING_TASK_NO_ENTRY         "Annotation is missing an entry date: {1}"
#define STRING_CMD_SYNC_USAGE        "Synchronizes data with the Taskserver"
#define STRING_CMD_SYNC_NO_SERVER    "Taskserver is not configured."
#define STRING_CMD_SYNC_BAD_CRED     "Taskserver credentials malformed."
#define STRING_CMD_SYNC_BAD_CERT     "Taskserver certificate missing."
#define STRING_CMD_SYNC_BAD_KEY      "Taskserver key missing."
#define STRING_CMD_SYNC_ADD          "   add {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modify {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "Syncing with {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Sync successful."
#define STRING_CMD_SYNC_SUCCESS1     "Sync successful.  {1} changes uploaded."
#define STRING_CMD_SYNC_SUCCESS2     "Sync successful.  {1} changes downloaded."
#define STRING_CMD_SYNC_SUCCESS3     "Sync successful.  {1} changes uploaded, {2} changes downloaded."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Sync successful.  No changes."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Sync failed.  Either your credentials are incorrect, or your account doesn't exist on the Taskserver."
#define STRING_CMD_SYNC_FAIL_ERROR   "La synchrniqation a échouée.  Taskserver a renvoyé l'erreur: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Sync failed.  Could not connect to the Taskserver."
#define STRING_CMD_SYNC_BAD_SERVER   "Sync failed.  Malformed configuration setting '{1}'"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior was built without GnuTLS support.  Sync is not available."
#define STRING_CMD_SYNC_INIT         "Please confirm that you wish to upload all your tasks to the Taskserver"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior will not proceed with first-time sync initialization."
#define STRING_CMD_SYNC_RELOCATE0    "The server account has been relocated.  Please update your configuration using:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"
#define STRING_CMD_SYNC_BAD_CA       "CA certificate not found."
#define STRING_CMD_SYNC_TRUST_CA     "You should either provide a CA certificate or override verification, but not both."
#define STRING_CMD_SYNC_TRUST_OBS    "The 'taskd.trust' settings may now only contain a value of 'strict', 'ignore hostname' or 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Platform, build and environment details"
#define STRING_CMD_DIAG_PLATFORM     "Platform"
#define STRING_CMD_DIAG_COMPILER     "Compiler"
#define STRING_CMD_DIAG_VERSION      "Version"
#define STRING_CMD_DIAG_CAPS         "Caps"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Build Features"
#define STRING_CMD_DIAG_BUILT        "Built"
#define STRING_CMD_DIAG_COMMIT       "Commit"
#define STRING_CMD_DIAG_FOUND        "(found)"
#define STRING_CMD_DIAG_MISSING      "(missing)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template {2}"
#define STRING_CMD_DIAG_ENABLED      "Enabled"
#define STRING_CMD_DIAG_DISABLED     "Disabled"
#define STRING_CMD_DIAG_CONFIG       "Configuration"
#define STRING_CMD_DIAG_TESTS        "Tests"
#define STRING_CMD_DIAG_UUID_SCAN    "Scanned {1} tasks for duplicate UUIDs:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "Found duplicate {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "No duplicates found"
#define STRING_CMD_DIAG_NONE         "-none-"
#define STRING_CMD_DIAG_HOOKS        "Hooks"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Generates a list of all commands, for autocompletion purposes"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Generates a list of all commands, for zsh autocompletion purposes"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Generates a list of all aliases, for autocompletion purposes"

#define STRING_CMD_MODIFY_USAGE1     "Modifies the existing task with provided arguments."
#define STRING_CMD_MODIFY_NO_DUE     "You cannot specify a recurring task without a due date."
#define STRING_CMD_MODIFY_REM_DUE    "You cannot remove the due date from a recurring task."
#define STRING_CMD_MODIFY_REC_ALWAYS "You cannot remove the recurrence from a recurring task."
#define STRING_CMD_MODIFY_TASK       "Modifying task {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "Modifying recurring task {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Modified {1} task."
#define STRING_CMD_MODIFY_N          "Modified {1} tasks."
#define STRING_CMD_MODIFY_NO         "Tâche non modifiée"
#define STRING_CMD_MODIFY_CONFIRM    "Modify task {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "This is a recurring task.  Do you want to modify all pending recurrences of this same task?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Additional text must be provided."
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "All colors, a sample, or a legend"
#define STRING_CMD_COLOR_HERE        "Here are the colors currently in use:"
#define STRING_CMD_COLOR_COLOR       "Color"
#define STRING_CMD_COLOR_DEFINITION  "Definition"
#define STRING_CMD_COLOR_EXPLANATION "Use this command to see how colors are displayed by your terminal."
#define STRING_CMD_COLOR_16          "16-color usage (supports underline, bold text, bright background):"
#define STRING_CMD_COLOR_256         "256-color usage (supports underline):"
#define STRING_CMD_COLOR_YOURS       "Your sample:"
#define STRING_CMD_COLOR_BASIC       "Basic colors"
#define STRING_CMD_COLOR_EFFECTS     "Effects"
#define STRING_CMD_COLOR_CUBE        "Color cube rgb"
#define STRING_CMD_COLOR_RAMP        "Gray ramp"
#define STRING_CMD_COLOR_TRY         "Try running '{1}'."
#define STRING_CMD_COLOR_OFF         "Color is currently turned off in your .taskrc file.  To enable color, remove the line 'color=off', or change the 'off' to 'on'."
#define STRING_CMD_CONFIG_USAGE      "Change settings in the task configuration"
#define STRING_CMD_CONFIG_CONFIRM    "Are you sure you want to change the value of '{1}' from '{2}' to '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Are you sure you want to add '{1}' with a value of '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Are you sure you want to remove '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "No entry named '{1}' found."
#define STRING_CMD_CONFIG_FILE_MOD   "Config file {1} modified."
#define STRING_CMD_CONFIG_NO_CHANGE  "No changes made."
#define STRING_CMD_CONFIG_NO_NAME    "Specify the name of a config variable to modify."
#define STRING_CMD_HCONFIG_USAGE     "Lists all supported configuration variables, for completion purposes"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "There are different numbers of columns and labels for report '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} affichées"
#define STRING_CMD_CUSTOM_COUNT      "1 tâche"
#define STRING_CMD_CUSTOM_COUNTN     "{1} tâches"
#define STRING_CMD_CUSTOM_TRUNCATED  "tronquées sur {1} lignes"
#define STRING_CMD_TIMESHEET_USAGE   "Résumé hebdomadaire des tâches terminées et démarrées"
#define STRING_CMD_TIMESHEET_STARTED "Started ({1} tasks)"
#define STRING_CMD_TIMESHEET_DONE    "Completed ({1} tasks)"
#define STRING_CMD_BURN_USAGE_M      "Affiche un graphique d'avancement, par mois"
#define STRING_CMD_BURN_USAGE_W      "Affiche un graphique d'avancement, par semaine"
#define STRING_CMD_BURN_USAGE_D      "Affiche un graphique d'avancement, par jour"
#define STRING_CMD_BURN_TITLE        "Burndown"
#define STRING_CMD_BURN_TOO_SMALL    "Terminal window too small to draw a graph."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Daily"
#define STRING_CMD_BURN_WEEKLY       "Weekly"
#define STRING_CMD_BURN_MONTHLY      "Monthly"
#define STRING_CMD_BURN_STARTED      "Started"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Done"             // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Pending"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "No convergence"
#define STRING_CMD_HELP_USAGE        "Displays this usage help text"
#define STRING_CMD_HELP_USAGE_LABEL  "Usage:"
#define STRING_CMD_HELP_USAGE_DESC   "Lance rc.default.command, si spécifié."
#define STRING_CMD_HELP_ALIASED      "Aliased to '{1}'"
#define STRING_CMD_CAL_USAGE         "Shows a calendar, with due tasks marked"
#define STRING_CMD_CAL_BAD_MONTH     "Argument '{1}' is not a valid month."
#define STRING_CMD_CAL_BAD_ARG       "Could not recognize argument '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Date"
#define STRING_CMD_CAL_LABEL_HOL     "Holiday"
#define STRING_CMD_CAL_SUN_MON       "The 'weekstart' configuration variable may only contain 'Sunday' or 'Monday'."
#define STRING_CMD_EDIT_USAGE        "Launches an editor to modify a task directly"
#define STRING_CMD_CALC_USAGE        "Calculator"

// Config
#define STRING_CONFIG_OVERNEST       "Configuration file nested to more than 10 levels deep - this has to be a mistake."
#define STRING_CONFIG_READ_INCLUDE   "Could not read include file '{1}'."
#define STRING_CONFIG_INCLUDE_PATH   "Can only include files with absolute paths, not '{1}'"
#define STRING_CONFIG_BAD_ENTRY      "Malformed entry '{1}' in config file."
#define STRING_CONFIG_DEPRECATED_COL "Your .taskrc file contains reports with deprecated columns.  Please check for entry_time, start_time or end_time in:"
#define STRING_CONFIG_DEPRECATED_VAR "Your .taskrc file contains variables that are deprecated:"

// Context
#define STRING_CONTEXT_CREATE_RC     "A configuration file could not be found in {1}\n\nWould you like a sample {2} created, so taskwarrior can proceed?"
#define STRING_CONTEXT_RC_OVERRIDE   "TASKRC override: {1}"
#define STRING_CONTEXT_DATA_OVERRIDE "TASKDATA override: {1}"

// Date
#define STRING_DATE_INVALID_FORMAT   "'{1}' n'est pas une date au format '{2}'."
#define STRING_DATE_BAD_WEEKSTART    "La variable de configuration 'weekstart' ne peut contenir que 'dimanche' ou 'lundi'."

#define STRING_DATE_JANUARY          "janvier"
#define STRING_DATE_FEBRUARY         "février"
#define STRING_DATE_MARCH            "mars"
#define STRING_DATE_APRIL            "avril"
#define STRING_DATE_MAY              "mai"
#define STRING_DATE_JUNE             "juin"
#define STRING_DATE_JULY             "juillet"
#define STRING_DATE_AUGUST           "août"
#define STRING_DATE_SEPTEMBER        "septembre"
#define STRING_DATE_OCTOBER          "octobre"
#define STRING_DATE_NOVEMBER         "novembre"
#define STRING_DATE_DECEMBER         "décembre"

#define STRING_DATE_MONDAY           "lundi"
#define STRING_DATE_TUESDAY          "mardi"
#define STRING_DATE_WEDNESDAY        "mercredi"
#define STRING_DATE_THURSDAY         "jeudi"
#define STRING_DATE_FRIDAY           "vendredi"
#define STRING_DATE_SATURDAY         "samedi"

// dependency
#define STRING_DEPEND_BLOCKED        "Tâche {1} est bloquée par :"
#define STRING_DEPEND_BLOCKING       "et bloque :"
#define STRING_DEPEND_FIX_CHAIN      "Would you like the dependency chain fixed?"

// DOM
#define STRING_DOM_UNREC             "DOM: Cannot get unrecognized name '{1}'."

// Eval
#define STRING_EVAL_NO_EXPRESSION    "No expression to evaluate."
#define STRING_EVAL_UNSUPPORTED      "Unsupported operator '{1}'."
#define STRING_EVAL_OP_EXPECTED      "Operator expected."
#define STRING_EVAL_NO_EVAL          "The expression could not be evaluated."
#define STRING_EVAL_NOT_EXPRESSION   "The value is not an expression."
#define STRING_PAREN_MISMATCH        "Mismatched parentheses in expression"

// edit
#define STRING_EDIT_NO_CHANGES       "Aucunes modifications détectées."
#define STRING_EDIT_FAILED           "Editing failed with exit code {1}."
#define STRING_EDIT_COMPLETE         "Édition terminée."
#define STRING_EDIT_IN_PROGRESS      "Task is already being edited."
#define STRING_EDIT_LAUNCHING        "Lancement de '{1}' maintenant..."
#define STRING_EDIT_CHANGES          "Des modifications ont été détectées."
#define STRING_EDIT_UNPARSEABLE      "Taskwarrior n'a pas pu appliquer vos modifications.  Désirez-vous essayer à nouveau ?"
#define STRING_EDIT_UNWRITABLE       "Votre dossier data.location n'est pas inscriptible."
#define STRING_EDIT_TAG_SEP          "Séparez les étiquettes (tag) ainsi : tag1 tag2"
#define STRING_EDIT_DEP_SEP          "Les dépendances devraient être une liste d'ID/UUID de tâches ou un interval d'ID, séparés par des virgules, sans espaces."
#define STRING_EDIT_UDA_SEP          "Attributs définis par l'utilisateur"
#define STRING_EDIT_UDA_ORPHAN_SEP   "Attributs orphelins définis par l'utilisateur"
#define STRING_EDIT_END              "Fin"

#define STRING_EDIT_PROJECT_MOD      "Projet modifié."
#define STRING_EDIT_PROJECT_DEL      "Projet supprimé."
#define STRING_EDIT_DESC_MOD         "Description modifiée."
#define STRING_EDIT_DESC_REMOVE_ERR  "Impossible de supprimer la description."
#define STRING_EDIT_ENTRY_REMOVE_ERR "Impossible de supprimer la date de création."
#define STRING_EDIT_ENTRY_MOD        "Date de création modifiée."
#define STRING_EDIT_START_MOD        "Date de départ modifiée."
#define STRING_EDIT_START_DEL        "Date de départ supprimée."
#define STRING_EDIT_END_MOD          "Date de fin modifiée."
#define STRING_EDIT_END_DEL          "Date de fin supprimée."
#define STRING_EDIT_END_SET_ERR      "Impossible de régler une date de fin sur une tâche en cours."
#define STRING_EDIT_SCHED_MOD        "Date prévue modifiée."
#define STRING_EDIT_SCHED_DEL        "Date prévue supprimée."
#define STRING_EDIT_DUE_MOD          "Échéance modifiée."
#define STRING_EDIT_DUE_DEL          "Échéance supprimée."
#define STRING_EDIT_DUE_DEL_ERR      "Impossible de retirer une échéance d'une tâche récurrente."
#define STRING_EDIT_UNTIL_MOD        "Date jusqu'à modifiée."
#define STRING_EDIT_UNTIL_DEL        "Date jusqu'à supprimée."
#define STRING_EDIT_RECUR_MOD        "Récurrence modifiée."
#define STRING_EDIT_RECUR_DEL        "Récurrence supprimée."
#define STRING_EDIT_RECUR_DUE_ERR    "Une tâche récurrente doit avoir une date planifiée."
#define STRING_EDIT_RECUR_ERR        "Durée de récurrence invalide."
#define STRING_EDIT_WAIT_MOD         "Retardement modifié."
#define STRING_EDIT_WAIT_DEL         "Retardement supprimé."
#define STRING_EDIT_PARENT_MOD       "UUID parent modifié."
#define STRING_EDIT_PARENT_DEL       "UUID parent supprimé."
#define STRING_EDIT_UDA_MOD          "ADU {1} modifié."
#define STRING_EDIT_UDA_DEL          "ADU {1} supprimé."

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "La commande 'task <id> edit' vous permet de modifier tous les aspects d'une tâche"
#define STRING_EDIT_HEADER_2         "en utilisant un éditeur de texte. Ci-dessous sont listés toutes les caractéristiques de la tâche."
#define STRING_EDIT_HEADER_3         "Modifiez à votre gré, et quand vous enregistrerez et quitterez votre éditeur de text,"
#define STRING_EDIT_HEADER_4         "Taskwarrior lira ce fichier, déterminera ce qui a changé et appliquera"
#define STRING_EDIT_HEADER_5         "ces changements. Si vous quittez votre édteur sans enregistrer"
#define STRING_EDIT_HEADER_6         " ou modifier, Taskwarrior ne fera rien."

#define STRING_EDIT_HEADER_7         "Les lignes commençant par # représentent les données que vous ne puvez changer, comme les ID."
#define STRING_EDIT_HEADER_8         "Si vous devenez trop prolifique en éditant, Taskwarrior vous renverra"
#define STRING_EDIT_HEADER_9         "dans l'éditeur pour réessayer."

#define STRING_EDIT_HEADER_10        "Si vous vous trouvez dans une boucle infinie, à rééditer le même fichier,"
#define STRING_EDIT_HEADER_11        "quitter simplement l'éditeur sans faire aucun changements.  Taskwarrior le détectera"
#define STRING_EDIT_HEADER_12        "et arrêtera l'édition."

#define STRING_EDIT_HEADER_13        "Les annotations sont de cette forme : <date> -- <text> et il peut y en avoir n'importe quel nombre."
#define STRING_EDIT_HEADER_14        "Le séparateur ' -- ' entre les champs de date et de texte ne devrai pas être supprimé."
#define STRING_EDIT_HEADER_15        "Il y a un champs vide ci-dessous pour ajouter une annotation facilement."

// Maintain the same spacing.
#define STRING_EDIT_TABLE_HEADER_1   "Nom                Détails éditables"
#define STRING_EDIT_TABLE_HEADER_2   "-----------------  ----------------------------------------------------"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_PREFIX          "Erreur : "
#define STRING_TRIVIAL_INPUT         "Il vous faut spécifier une commande ou une tâche à modifier."
#define STRING_INFINITE_LOOP         "Substitution arrêté parce que plus de {1} changements ont été faits - protection contre les boucles infinies."
#define STRING_UDA_TYPE              "User defined attributes may only be of type 'string', 'date', 'duration' or 'numeric'."
#define STRING_UDA_COLLISION         "L'ADU nommé '{1}' est le même qu'un attribut du noyau, et ce n'est pas autorisé."
#define STRING_INVALID_MOD           "The '{1}' attribute does not allow a value of '{2}'."
#define STRING_ERROR_DETAILS         "The setting 'calendar.details.report' must contain a single report name."
#define STRING_ERROR_NO_FILTER       "Command line filters are not supported by this command."
#define STRING_ERROR_CONFIRM_SIGINT  "Interrupted: No changes made."
#define STRING_ERROR_BAD_STATUS      "The status '{1}' is not valid."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "No tasks."
#define STRING_FEEDBACK_NO_TASKS_SP  "No tasks specified."
#define STRING_FEEDBACK_NO_MATCH     "No matches."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 task)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} tasks)"
#define STRING_FEEDBACK_DELETED      "{1} will be deleted."
#define STRING_FEEDBACK_DEP_SET      "Dependencies will be set to '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Dependencies will be changed from '{1}' to '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Dependencies '{1}' deleted."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dependencies set to '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependencies changed from '{1}' to '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} will be set to '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} will be changed from '{2}' to '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} deleted."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} deleted (duration: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} set to '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} changed from '{2}' to '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Annotation of '{1}' added."
#define STRING_FEEDBACK_ANN_DEL      "Annotation '{1}' deleted."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Annotation changed to '{1}'."
#define STRING_FEEDBACK_NOP          "No changes will be made."
#define STRING_FEEDBACK_WAS_NOP      "No changes made."
#define STRING_FEEDBACK_TAG_NOCOLOR  "The 'nocolor' special tag will disable color rules for this task."
#define STRING_FEEDBACK_TAG_NONAG    "The 'nonag' special tag will prevent nagging when this task is modified."
#define STRING_FEEDBACK_TAG_NOCAL    "The 'nocal' special tag will keep this task off the 'calendar' report."
#define STRING_FEEDBACK_TAG_NEXT     "The 'next' special tag will boost the urgency of this task so it appears on the 'next' report."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Unblocked {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Tâche {1} '{2}' a expiré et a été supprimée."
#define STRING_FEEDBACK_BACKLOG_N    "Il y a des {1} changements locaux.  Synchronisation requise."
#define STRING_FEEDBACK_BACKLOG      "Il y a des {1} changements locaux.  Synchronisation requise."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "The project '{1}' has changed."
#define STRING_HELPER_PROJECT_COMPL  "Project '{1}' is {2}% complete"
#define STRING_HELPER_PROJECT_REM    "({1} of {2} tasks remaining)."
#define STRING_HELPER_PROJECT_REM1   "({1} task remaining)."

// Hooks
#define STRING_HOOK_ERROR_OBJECT     "Hook Error: JSON Object '{...}' expected from hook script: {1}"
#define STRING_HOOK_ERROR_NODESC     "Hook Error: JSON Object missing 'description' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_NOUUID     "Hook Error: JSON Object missing 'uuid' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_SYNTAX     "Hook Error: JSON syntax error in: {1}"
#define STRING_HOOK_ERROR_JSON       "Hook Error: JSON "
#define STRING_HOOK_ERROR_NOPARSE    "Hook Error: JSON failed to parse: "
#define STRING_HOOK_ERROR_BAD_NUM    "Hook Error: Expected {1} JSON task(s), found {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_SAME1      "Hook Error: JSON must be for the same task: {1}, in hook script: {2}"
#define STRING_HOOK_ERROR_SAME2      "Hook Error: JSON must be for the same task: {1} != {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_NOFEEDBACK "Hook Error: Expected feedback from failing hook script: {1}"

// Record
#define STRING_RECORD_EMPTY          "Empty record in input."
#define STRING_RECORD_JUNK_AT_EOL    "Unrecognized characters at end of line."
#define STRING_RECORD_NOT_FF4        "Record not recognized as format 4."

// 'show' command
#define STRING_CMD_SHOW              "Shows all configuration variables or subset"
#define STRING_CMD_SHOW_ARGS         "You can only specify 'all' or a search string."
#define STRING_CMD_SHOW_NONE         "No matching configuration variables."
#define STRING_CMD_SHOW_UNREC        "Your .taskrc file contains these unrecognized variables:"
#define STRING_CMD_SHOW_DIFFER       "Some of your .taskrc variables differ from the default values."
#define STRING_CMD_SHOW_EMPTY        "Erreur de configuration : .taskrc ne contient pas d'entrées."
#define STRING_CMD_SHOW_DIFFER_COLOR "These are highlighted in {1} above."
#define STRING_CMD_SHOW_CONFIG_ERROR "Erreur de configuration  : {1} contient une valeur non reconnue '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Erreur de configuration  : data.location non spécifié dans le fichier .taskrc."
#define STRING_CMD_SHOW_LOC_EXIST    "Erreur de configuration  : data.location contains a directory name that doesn't exist, or is unreadable."
#define STRING_CMD_SHOW_CONF_VAR     "Config Variable"
#define STRING_CMD_SHOW_CONF_VALUE   "Value"
#define STRING_CMD_SHOW_CONF_DEFAULT "Default value"
#define STRING_CMD_SHOWRAW           "Shows all configuration settings in a machine-readable format"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior no longer supports file format 1, originally used between 27 November 2006 and 31 December 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior no longer supports file format 2, originally used between 1 January 2008 and 12 April 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Unrecognized Taskwarrior file format or blank line in data."
#define STRING_TASK_DEPEND_ITSELF    "A task cannot be dependent on itself."
#define STRING_TASK_DEPEND_MISS_CREA "Could not create a dependency on task {1} - not found."
#define STRING_TASK_DEPEND_MISS_DEL  "Could not delete a dependency on task {1} - not found."
#define STRING_TASK_DEPEND_DUP       "La tâche {1} dépend déjà de la tâche {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Circular dependency detected and disallowed."
#define STRING_TASK_VALID_DESC       "A task must have a description."
#define STRING_TASK_VALID_BLANK      "Cannot add a task that is blank."
#define STRING_TASK_VALID_BEFORE     "Warning: You have specified that the '{1}' date is after the '{2}' date."
#define STRING_TASK_VALID_REC_DUE    "A recurring task must also have a 'due' date."
#define STRING_TASK_VALID_RECUR      "The recurrence value '{1}' is not valid."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Command prevented from running."
#define STRING_TASK_SAFETY_ALLOW     "You did not specify a filter, and with the 'allow.empty.filter' value, no action is taken."
#define STRING_TASK_INVALID_DUR      "The duration value '{1}' is not supported."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

// TDB2
#define STRING_TDB2_PARSE_ERROR      " in {1} at line {2}"
#define STRING_TDB2_UUID_NOT_UNIQUE  "Cannot add task because the uuid '{1}' is not unique."
#define STRING_TDB2_MISSING          "Missing                       {1}  \"{2}\""
#define STRING_TDB2_NO_UNDO          "Il n'y a aucune action enregistrée à défaire."
#define STRING_TDB2_LAST_MOD         "The last modification was made {1}"
#define STRING_TDB2_UNDO_PRIOR       "Valeurs précédantes"
#define STRING_TDB2_UNDO_CURRENT     "Valeurs actuelles"
#define STRING_TDB2_DIFF_PREV        "--- previous state"             // Same length
#define STRING_TDB2_DIFF_PREV_DESC   "Undo will restore this state"   //   ||
#define STRING_TDB2_DIFF_CURR        "+++ current state "             // Same length
#define STRING_TDB2_DIFF_CURR_DESC   "Change made {1}"
#define STRING_TDB2_UNDO_CONFIRM     "The undo command is not reversible.  Are you sure you want to revert to the previous state?"
#define STRING_TDB2_MISSING_UUID     "Cannot locate UUID in task to undo."
#define STRING_TDB2_REVERTED         "Modified task reverted."
#define STRING_TDB2_REMOVED          "Tâche retirée."
#define STRING_TDB2_UNDO_COMPLETE    "Annulation terminée."
#define STRING_TDB2_UNDO_SYNCED      "Impossible d'annuler les changements car la tâche a déjà été synchronysée. Modifiez plutôt la tâche."
#define STRING_TDB2_DIRTY_EXIT       "Exiting with unwritten changes to {1}"
#define STRING_TDB2_UNWAIT           "Un-waiting task '{1}'"

// recur.cpp
#define STRING_RECUR_CREATE          "Creating recurring task instance '{1}'"

// View
#define STRING_VIEW_TOO_SMALL        "The report has a minimum width of {1} and does not fit in the available width of {2}."

// Usage text.  This is an exception, and contains \n characters and formatting.
#define STRING_CMD_HELP_TEXT \
  "Documentation for Taskwarrior can be found using 'man task', 'man taskrc', 'man " \
  "task-color', 'man task-sync' or at http://taskwarrior.org\n" \
  "\n" \
  "The general form of commands is:\n" \
  "  task [<filter>] <command> [<mods>]\n" \
  "\n" \
  "The <filter> consists of zero or more restrictions on which tasks to select, " \
  "such as:\n" \
  "  task                                      <command> <mods>\n" \
  "  task 28                                   <command> <mods>\n" \
  "  task +weekend                             <command> <mods>\n" \
  "  task project:Home due.before:today        <command> <mods>\n" \
  "  task ebeeab00-ccf8-464b-8b58-f7f2d606edfb <command> <mods>\n" \
  "\n" \
  "By default, filter elements are combined with an implicit 'and' operator, but " \
  "'or' and 'xor' may also be used, provided parentheses are included:\n" \
  "  task '(/[Cc]at|[Dd]og/ or /[0-9]+/)'      <command> <mods>\n" \
  "\n" \
  "A filter may target specific tasks using ID or UUID numbers.  To specify " \
  "multiple tasks use one of these forms:\n" \
  "  task 1,2,3                                    delete\n" \
  "  task 1-3                                      info\n" \
  "  task 1,2-5,19                                 modify pri:H\n" \
  "  task 4-7 ebeeab00-ccf8-464b-8b58-f7f2d606edfb info\n" \
  "\n" \
  "The <mods> consist of zero or more changes to apply to the selected tasks, " \
  "such as:\n" \
  "  task <filter> <command> project:Home\n" \
  "  task <filter> <command> +weekend +garden due:tomorrow\n" \
  "  task <filter> <command> Description/annotation text\n" \
  "  task <filter> <command> /from/to/     <- replace first match\n" \
  "  task <filter> <command> /from/to/g    <- replace all matches\n" \
  "\n" \
  "Tags are arbitrary words, any quantity:\n" \
  "  +tag       The + means add the tag\n" \
  "  -tag       The - means remove the tag\n" \
  "\n" \
  "Built-in attributes are:\n" \
  "  description:    Task description text\n" \
  "  status:         Status of task - pending, completed, deleted, waiting\n" \
  "  project:        Project name\n" \
  "  priority:       Priority\n" \
  "  due:            Due date\n" \
  "  recur:          Recurrence frequency\n" \
  "  until:          Expiration date of a task\n" \
  "  limit:          Desired number of rows in report, or 'page'\n" \
  "  wait:           Date until task becomes pending\n" \
  "  entry:          Date task was created\n" \
  "  end:            Date task was completed/deleted\n" \
  "  start:          Date task was started\n" \
  "  scheduled:      Date task is scheduled to start\n" \
  "  modified:       Date task was last modified\n" \
  "  depends:        Other tasks that this task depends upon\n" \
  "\n" \
  "Attribute modifiers make filters more precise.  Supported modifiers are:\n" \
  "\n" \
  "  Modifiers         Example            Equivalent           Meaning\n" \
  "  ----------------  -----------------  -------------------  -------------------------\n" \
  "                    due:today          due = today          Fuzzy match\n" \
  "  not               due.not:today      due != today         Fuzzy non-match\n" \
  "  before, below     due.before:today   due < today          Exact date comparison\n" \
  "  after, above      due.after:today    due >= tomorrow      Exact date comparison\n" \
  "  none              project.none:      project == ''        Empty\n" \
  "  any               project.any:       project !== ''       Not empty\n" \
  "  is, equals        project.is:x       project == x         Exact match\n" \
  "  isnt              project.isnt:x     project !== x        Exact non-match\n" \
  "  has, contains     desc.has:Hello     desc ~ Hello         Pattern match\n" \
  "  hasnt,            desc.hasnt:Hello   desc !~ Hello        Pattern non-match\n" \
  "  startswith, left  desc.left:Hel      desc ~ '^Hel'        Beginning match\n" \
  "  endswith, right   desc.right:llo     desc ~ 'llo$'        End match\n" \
  "  word              desc.word:Hello    desc ~ '\\bHello\\b'   Boundaried word match\n" \
  "  noword            desc.noword:Hello  desc !~ '\\bHello\\b'  Boundaried word non-match\n" \
  "\n" \
  "Alternately algebraic expressions support:\n" \
  "  and  or  xor            Logical operators\n" \
  "  <  <=  =  !=  >=  >     Relational operators\n" \
  "  (  )                    Precedence\n" \
  "\n" \
  "  task due.before:eom priority.not:L   list\n" \
  "  task '(due < eom or priority != L)'  list\n" \
  "\n" \
  "The default .taskrc file can be overridden with:\n" \
  "  task ... rc:<alternate file> ...\n" \
  "  task ... rc:~/.alt_taskrc ...\n" \
  "\n" \
  "The values in .taskrc (or alternate) can be overridden with:\n" \
  "  task ... rc.<name>=<value> ...\n" \
  "  task rc.color=off list\n" \
  "\n" \
  "Any command or attribute name may be abbreviated if still unique:\n" \
  "  task list project:Home\n" \
  "  task li       pro:Home\n" \
  "\n" \
  "Some task descriptions need to be escaped because of the shell:\n" \
  "  task add \"quoted ' quote\"\n" \
  "  task add escaped \\' quote\n" \
  "\n" \
  "The argument -- tells taskwarrior to treat all other args as description, even " \
  "if they would otherwise be attributes or tags:\n" \
  "  task add -- project:Home needs scheduling\n" \
  "\n" \
  "Many characters have special meaning to the shell, including:\n" \
  "  $ ! ' \" ( ) ; \\ ` * ? { } [ ] < > | & % # ~\n" \
  "\n"

/*
  To be included later, before the 'precendence' line.

  "  +  -                    Addition, subtraction\n" \
  "  !                       Inversion\n" \
  "  ~  !~                   Match, no match\n" \
*/

// util
#define STRING_UTIL_CONFIRM_YES      "oui"
#define STRING_UTIL_CONFIRM_YES_U    "Oui"
#define STRING_UTIL_CONFIRM_NO       "non"
#define STRING_UTIL_CONFIRM_ALL      "tous"
#define STRING_UTIL_CONFIRM_ALL_U    "Tous"
#define STRING_UTIL_CONFIRM_QUIT     "quitter"

// Legacy
#define STRING_LEGACY_PRIORITY       "Legacy attribute found.  Please change '{1}' to '{2}'."

#endif
