async function imageToUint8Array(image, context) {
    context.width = image.width;
    context.height = image.height;
    context.drawImage(image, 0, 0);
    const blob = await context.canvas.toBlob(
    callback,
    "image/jpeg", // the MIME type of the image format
    1 // quality (in the range 0..1)
    );
    return new Uint8Array(await blob.arrayBuffer());
}
