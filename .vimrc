" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
" This config is targeted for Vim 8.1+ and expects you to have Plug installed.
" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
" Plugins
" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

" Specify a directory for plugins.
call plug#begin('~/.vim/plugged')

" Automatically show Vim's complete menu while typing
Plug 'vim-scripts/AutoComplPop'

" Languages and file types.
" [insert langauge and file types plugin list here]

" call plug#end()

" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
" Basic Settings
" 	Research any of these by running :help <setting>
" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

source $VIMRUNTIME/defaults.vim

" Use a line cursor within insert mode and a block cursor everywhere else.
"
" Reference chart of values:
" 	ps = 0	-> blinking block.
" 	ps = 1	-> blinking block (default).
" 	ps = 2	-> steady block.
" 	ps = 3	-> blinking underline.
" 	ps = 4	-> steady underline.
" 	ps = 5	-> blinking bar (xterm)
" 	ps = 6	-> steady bar (xterm)

set nocompatible
filetype plugin indent on
syntax on

"~~~~~~~~~ General settings ~~~~~~~~~
set title
set titlestring=%t
set confirm
set laststatus=2


"~~~~~~~~~ interface preferences ~~~~~~~~~
set autoindent
set number
set ruler
set breakindent
set linebreak 
set cindent
set encoding=utf-8 
highlight LineNr ctermfg=248
set rnu

"~~~~~~~~~ auto-complete settings ~~~~~~~~~
set autoread
set complete+=kspell
set completeopt=menuone,longest 
set shortmess+=c
set wildmenu
set wildmode=full
" set hlsearch
" set incsearch
" set ignorecase
" set spell

" Notes from https://www.youtube.com/watch?v=2f8h45YR494&t=403&ab_channel=NickJanetakis
" 	"Using Vim's Built-in Complete Menu for Autocompleting Words"
" 	- Also, look up snippets!
" 	- AutoComplPop plugin
" 	- First, specify a directory for plugins
