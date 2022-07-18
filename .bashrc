if [ -z "$KERNEL_SOURCE" ]; then
    export KERNEL_SOURCE=/lib/modules/$(uname -r)/build
fi

echo "[ENV] KERNEL_SOURCE = $KERNEL_SOURCE"

