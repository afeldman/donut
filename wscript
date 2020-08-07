# waf project directories
top = '.'
out = 'build'

def options(opt):
    opt.load('compiler_c')

def configure(ctx):
    ctx.load('compiler_c')

def build(ctx):
    ctx.program(source="donut.c",target="donut",lib=['m'])