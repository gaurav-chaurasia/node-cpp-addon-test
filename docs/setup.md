### Setup to add cpp addons in nodejs

* you need to install a few packages first

```bash
    $ npm i -g node-gyp

    # run below command from admin pawershell 
    $ npm i --g --production windows-build-tools
```

* create a file in your nodejs project `binding.gyp`
* in `binding.gyp` you are going to add a few configurations

* to build the project run the following command
```bash
    $ node-gyp configure
    $ node-gyp build
```