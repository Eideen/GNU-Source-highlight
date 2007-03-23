/* cmdline.h */

/* File autogenerated by gengetopt version 2.19.1  */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_VERSION
#define CMDLINE_PARSER_VERSION VERSION
#endif

struct gengetopt_args_info
{
  const char *help_help; /* Print help and exit help description.  */
  const char *version_help; /* Print version and exit help description.  */
  char * input_arg;	/* input file. default std input.  */
  char * input_orig;	/* input file. default std input original value given at command line.  */
  const char *input_help; /* input file. default std input help description.  */
  char * output_arg;	/* output file. default std output. If STDOUT is specified, the output is directed to standard output.  */
  char * output_orig;	/* output file. default std output. If STDOUT is specified, the output is directed to standard output original value given at command line.  */
  const char *output_help; /* output file. default std output. If STDOUT is specified, the output is directed to standard output help description.  */
  char * src_lang_arg;	/* source language (use --lang-list to get the complete list).  If not specified, the source language will be guessed from the file extension..  */
  char * src_lang_orig;	/* source language (use --lang-list to get the complete list).  If not specified, the source language will be guessed from the file extension. original value given at command line.  */
  const char *src_lang_help; /* source language (use --lang-list to get the complete list).  If not specified, the source language will be guessed from the file extension. help description.  */
  const char *lang_list_help; /* list all the supported language and associated language definition file help description.  */
  const char *outlang_list_help; /* list all the supported output language and associated language definition file help description.  */
  char * out_format_arg;	/* output format (use --outlang-list to get the complete list) (default='html').  */
  char * out_format_orig;	/* output format (use --outlang-list to get the complete list) original value given at command line.  */
  const char *out_format_help; /* output format (use --outlang-list to get the complete list) help description.  */
  const char *doc_help; /* create an output file that can be used as a stand alone document (e.g., not to be included in another one) help description.  */
  const char *no_doc_help; /* cancel the --doc option even if it is implied (e.g., when css is given) help description.  */
  char * css_arg;	/* the external style sheet filename.  Implies --doc.  */
  char * css_orig;	/* the external style sheet filename.  Implies --doc original value given at command line.  */
  const char *css_help; /* the external style sheet filename.  Implies --doc help description.  */
  char * title_arg;	/* give a title to the output document.  Implies --doc.  */
  char * title_orig;	/* give a title to the output document.  Implies --doc original value given at command line.  */
  const char *title_help; /* give a title to the output document.  Implies --doc help description.  */
  int tab_arg;	/* specify tab length. (default='8').  */
  char * tab_orig;	/* specify tab length. original value given at command line.  */
  const char *tab_help; /* specify tab length. help description.  */
  char * header_arg;	/* file to insert as header.  */
  char * header_orig;	/* file to insert as header original value given at command line.  */
  const char *header_help; /* file to insert as header help description.  */
  char * footer_arg;	/* file to insert as footer.  */
  char * footer_orig;	/* file to insert as footer original value given at command line.  */
  const char *footer_help; /* file to insert as footer help description.  */
  char * style_file_arg;	/* specify the file containing format options (default='default.style').  */
  char * style_file_orig;	/* specify the file containing format options original value given at command line.  */
  const char *style_file_help; /* specify the file containing format options help description.  */
  char * style_css_file_arg;	/* specify the file containing format options (in css syntax).  */
  char * style_css_file_orig;	/* specify the file containing format options (in css syntax) original value given at command line.  */
  const char *style_css_file_help; /* specify the file containing format options (in css syntax) help description.  */
  char * outlang_def_arg;	/* output language definition file.  */
  char * outlang_def_orig;	/* output language definition file original value given at command line.  */
  const char *outlang_def_help; /* output language definition file help description.  */
  char * outlang_map_arg;	/* output language map file (default='outlang.map').  */
  char * outlang_map_orig;	/* output language map file original value given at command line.  */
  const char *outlang_map_help; /* output language map file help description.  */
  char * data_dir_arg;	/* directory where language definition files and language maps are searched for.  If not specified these files are searched for in the current directory and in the data dir installation directory.  */
  char * data_dir_orig;	/* directory where language definition files and language maps are searched for.  If not specified these files are searched for in the current directory and in the data dir installation directory original value given at command line.  */
  const char *data_dir_help; /* directory where language definition files and language maps are searched for.  If not specified these files are searched for in the current directory and in the data dir installation directory help description.  */
  char * output_dir_arg;	/* output directory.  */
  char * output_dir_orig;	/* output directory original value given at command line.  */
  const char *output_dir_help; /* output directory help description.  */
  char * lang_def_arg;	/* language definition file.  */
  char * lang_def_orig;	/* language definition file original value given at command line.  */
  const char *lang_def_help; /* language definition file help description.  */
  char * lang_map_arg;	/* language map file (default='lang.map').  */
  char * lang_map_orig;	/* language map file original value given at command line.  */
  const char *lang_map_help; /* language map file help description.  */
  char * show_lang_elements_arg;	/* prints the language elements that are defined in the language definition file.  */
  char * show_lang_elements_orig;	/* prints the language elements that are defined in the language definition file original value given at command line.  */
  const char *show_lang_elements_help; /* prints the language elements that are defined in the language definition file help description.  */
  const char *infer_lang_help; /* force to infer source script language (overriding given language specification) help description.  */
  const char *line_number_help; /* number all output lines help description.  */
  char * line_number_ref_arg;	/* number all output lines and generate an anchor, made of the specified prefix + the line number (default='line').  */
  char * line_number_ref_orig;	/* number all output lines and generate an anchor, made of the specified prefix + the line number original value given at command line.  */
  const char *line_number_ref_help; /* number all output lines and generate an anchor, made of the specified prefix + the line number help description.  */
  char * gen_references_arg;	/* generate references (default='inline').  */
  char * gen_references_orig;	/* generate references original value given at command line.  */
  const char *gen_references_help; /* generate references help description.  */
  char * ctags_file_arg;	/* specify the file generated by ctags that will be used to generate references (default='tags').  */
  char * ctags_file_orig;	/* specify the file generated by ctags that will be used to generate references original value given at command line.  */
  const char *ctags_file_help; /* specify the file generated by ctags that will be used to generate references help description.  */
  char * ctags_arg;	/* how to run the ctags command.  If this option is not specified, ctags will be executed with the default value.  If it is specified with an empty string, ctags will not be executed at all (default='ctags --excmd=n --tag-relative=yes').  */
  char * ctags_orig;	/* how to run the ctags command.  If this option is not specified, ctags will be executed with the default value.  If it is specified with an empty string, ctags will not be executed at all original value given at command line.  */
  const char *ctags_help; /* how to run the ctags command.  If this option is not specified, ctags will be executed with the default value.  If it is specified with an empty string, ctags will not be executed at all help description.  */
  const char *verbose_help; /* verbose mode on help description.  */
  const char *quiet_help; /* print no progress information help description.  */
  const char *statistics_help; /* print some statistics (i.e., elapsed time) help description.  */
  int gen_version_flag;	/* put source-highlight version in the generated file (default=on).  */
  const char *gen_version_help; /* put source-highlight version in the generated file help description.  */
  char * check_lang_arg;	/* only check the correctness of a language definition file.  */
  char * check_lang_orig;	/* only check the correctness of a language definition file original value given at command line.  */
  const char *check_lang_help; /* only check the correctness of a language definition file help description.  */
  char * check_outlang_arg;	/* only check the correctness of an output language definition file.  */
  char * check_outlang_orig;	/* only check the correctness of an output language definition file original value given at command line.  */
  const char *check_outlang_help; /* only check the correctness of an output language definition file help description.  */
  const char *failsafe_help; /* if no language definition is found for the input, it is simply copied to the output help description.  */
  char * debug_langdef_arg;	/* debug a language definition.  In dump mode just dumps all the steps; in interactive, at each step, waits for some input (press ENTER to step) (default='dump').  */
  char * debug_langdef_orig;	/* debug a language definition.  In dump mode just dumps all the steps; in interactive, at each step, waits for some input (press ENTER to step) original value given at command line.  */
  const char *debug_langdef_help; /* debug a language definition.  In dump mode just dumps all the steps; in interactive, at each step, waits for some input (press ENTER to step) help description.  */
  char * show_regex_arg;	/* show the regular expression automaton corresponding to a language definition file.  */
  char * show_regex_orig;	/* show the regular expression automaton corresponding to a language definition file original value given at command line.  */
  const char *show_regex_help; /* show the regular expression automaton corresponding to a language definition file help description.  */
  
  int help_given ;	/* Whether help was given.  */
  int version_given ;	/* Whether version was given.  */
  int input_given ;	/* Whether input was given.  */
  int output_given ;	/* Whether output was given.  */
  int src_lang_given ;	/* Whether src-lang was given.  */
  int lang_list_given ;	/* Whether lang-list was given.  */
  int outlang_list_given ;	/* Whether outlang-list was given.  */
  int out_format_given ;	/* Whether out-format was given.  */
  int doc_given ;	/* Whether doc was given.  */
  int no_doc_given ;	/* Whether no-doc was given.  */
  int css_given ;	/* Whether css was given.  */
  int title_given ;	/* Whether title was given.  */
  int tab_given ;	/* Whether tab was given.  */
  int header_given ;	/* Whether header was given.  */
  int footer_given ;	/* Whether footer was given.  */
  int style_file_given ;	/* Whether style-file was given.  */
  int style_css_file_given ;	/* Whether style-css-file was given.  */
  int outlang_def_given ;	/* Whether outlang-def was given.  */
  int outlang_map_given ;	/* Whether outlang-map was given.  */
  int data_dir_given ;	/* Whether data-dir was given.  */
  int output_dir_given ;	/* Whether output-dir was given.  */
  int lang_def_given ;	/* Whether lang-def was given.  */
  int lang_map_given ;	/* Whether lang-map was given.  */
  int show_lang_elements_given ;	/* Whether show-lang-elements was given.  */
  int infer_lang_given ;	/* Whether infer-lang was given.  */
  int line_number_given ;	/* Whether line-number was given.  */
  int line_number_ref_given ;	/* Whether line-number-ref was given.  */
  int gen_references_given ;	/* Whether gen-references was given.  */
  int ctags_file_given ;	/* Whether ctags-file was given.  */
  int ctags_given ;	/* Whether ctags was given.  */
  int verbose_given ;	/* Whether verbose was given.  */
  int quiet_given ;	/* Whether quiet was given.  */
  int statistics_given ;	/* Whether statistics was given.  */
  int gen_version_given ;	/* Whether gen-version was given.  */
  int check_lang_given ;	/* Whether check-lang was given.  */
  int check_outlang_given ;	/* Whether check-outlang was given.  */
  int failsafe_given ;	/* Whether failsafe was given.  */
  int debug_langdef_given ;	/* Whether debug-langdef was given.  */
  int show_regex_given ;	/* Whether show-regex was given.  */

  char **inputs ; /* unamed options */
  unsigned inputs_num ; /* unamed options number */
} ;

extern const char *gengetopt_args_info_purpose;
extern const char *gengetopt_args_info_usage;
extern const char *gengetopt_args_info_help[];

int cmdline_parser (int argc, char * const *argv,
  struct gengetopt_args_info *args_info);
int cmdline_parser2 (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

void cmdline_parser_print_help(void);
void cmdline_parser_print_version(void);

void cmdline_parser_init (struct gengetopt_args_info *args_info);
void cmdline_parser_free (struct gengetopt_args_info *args_info);

int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern char *cmdline_parser_gen_references_values[] ;	/* Possible values for gen-references.  */
extern char *cmdline_parser_debug_langdef_values[] ;	/* Possible values for debug-langdef.  */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
