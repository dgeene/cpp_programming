class INT {
    public:
        INT() {
            num = 0;
        }
        void operator = (const INT &I) {
            num = I.num;
        }
    private:
        int num;
};
