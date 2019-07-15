#include "/include/io"
#include "/include/window"
#include "/include/fs"
#include "/include/memory"
#include "/include/string"
#include "/include/xtoa_itoa"
#include "/include/proc"
int child;
int read_file(int id, int handle) {
    int c;
    char* title = malloc(20);
    window_get_text(id, title);
    put_string("[INFO] Title: ");
    put_string(title);
    put_string("\n");
    if (child) {
        window_set_text(id, "- Test window -");
        long layout = window_create_comctl(id, layout_absolute);
        long text = window_create_comctl(id, comctl_label);
        window_comctl_connect(window_get_base(id), layout);
        window_comctl_connect(layout, text);
        window_comctl_set_text(text, "Hello world!");
        window_comctl_set_bound(text, 10, 10, 200, 30);
    }
    else
        window_set_text(id, "- Test window 2 -");
    __window_msg_struct__ s;
    while (c = window_get_msg(handle, &s), c < 0x1000) {
        put_string("[MSG ] Handle: ");
        put_hex(id);
        put_string(", Code= ");
        put_hex(s.code);
        put_string(", Param1= ");
        put_hex(s.param1);
        put_string(", Param2= ");
        put_hex(s.param2);
        put_string("\n");
        window_default_msg(id, &s);
    }
    switch (c) {
    case 0x2000:
        // put_string("[INFO] Read to the end.");
        break;
    case 0x2001:
        set_fg(240, 0, 0);
        put_string("[ERROR] Read error.");
        restore_fg();
        break;
    }
    close(handle);
    close(id);
}
int main(int argc, char **argv) {
    put_string("========== [#15 TEST WINDOW] ==========\n");
    __window_create_struct__ s;
    if (fork() == -1)
        child = false;
    else
        child = true;
    s.caption = "Test window";
    s.left = 10;
    if (child)
        s.top = 280;
    else
        s.top = 50;
    s.width = 200;
    s.height = 200;
    int id = window_create(&s);
    put_string("Create test window: ");
    put_hex(id);
    put_string("\n");
    char* msg = malloc(20);
    strcpy(msg, "/handle/");
    char* fmt = malloc(20);
    i32toa(id, fmt);
    strcat(msg, fmt);
    strcat(msg, "/message");
    int handle = open(msg);
    switch (handle) {
        default:
            // put_string("[INFO] Success.");
            read_file(id, handle);
            break;
        case -1:
            set_fg(240, 0, 0);
            put_string("[ERROR] File not exists.");
            restore_fg();
            break;
        case -2:
            set_fg(240, 0, 0);
            put_string("[ERROR] Path is not file.");
            restore_fg();
            break;
        case -3:
            set_fg(240, 0, 0);
            put_string("[ERROR] File is locked.");
            restore_fg();
            break;
    }
    //window_wait(id);
    put_string("========== [#15 TEST WINDOW] ==========\n");
    return 0;
}