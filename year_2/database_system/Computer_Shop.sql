create table tbEmployee
(
	EmpID			char(5)									not null,
	KFirstName		nvarchar(max)	collate KHMER_100_BIN	not null,
	KLastName		nvarchar(max)	collate KHMER_100_BIN	not null,
	EnFirstName		varchar(max)							not null,
	EnLastName		varchar(max)							not null,
	Sex				char									not null,
	EDate			tinyint									not null,
	EMonth			tinyint									not null,
	EYear			smallint								null,
	EHouse			nvarchar(max)	collate KHMER_100_BIN	null,
	EStreet			nvarchar(max)	collate KHMER_100_BIN	null,
	EPhum			nvarchar(max)	collate KHMER_100_BIN	null,
	EKhum			nvarchar(max)	collate KHMER_100_BIN	not null,
	ESrok			nvarchar(max)	collate KHMER_100_BIN	not null,
	EKhet			nvarchar(max)	collate KHMER_100_BIN	not null,
	EmpPos			varchar(30)								not null,
	Salary			money									not null,
	Phone1			varchar(10)								not null,
	Phone2			varchar(10)								null,
	Photo			varbinary(max)							null,
	HireDate		date									not null,
	StopWork		bit										null,
	constraint  pk_emp  primary key(EmpID)
)
create table tbCustomer
(
	CusID	integer identity (1,1)	not null,
	CKhFirstName nvarchar(max) collate KHMER_100_BIN not null,
	CKhlastName nvarchar(max) collate KHMER_100_BIN not null,
	CEnFirstName varchar(max) not null,
	CEnLastName varchar(max) not null,
	CHouse			nvarchar(max)	collate KHMER_100_BIN	null,
	CStreet			nvarchar(max)	collate KHMER_100_BIN	null,
	CPhum			nvarchar(max)	collate KHMER_100_BIN	null,
	CKhum			nvarchar(max)	collate KHMER_100_BIN	not null,
	CSrok			nvarchar(max)	collate KHMER_100_BIN	not null,
	CKhet			nvarchar(max)	collate KHMER_100_BIN	not null,
	CusContact1 varchar(10) not null,
	CusContact2 varchar(10) null,
	constraint pk_cus primary key(CusID)
)
create table tbSupplier
(
	SupID	integer identity (1,1)	not null,
	Supplier varchar(max) not null,
	SHouse			nvarchar(max)	collate KHMER_100_BIN	null,
	SStreet			nvarchar(max)	collate KHMER_100_BIN	null,
	SPhum			nvarchar(max)	collate KHMER_100_BIN	null,
	SKhum			nvarchar(max)	collate KHMER_100_BIN	not null,
	SSrok			nvarchar(max)	collate KHMER_100_BIN	not null,
	SKhet			nvarchar(max)	collate KHMER_100_BIN	not null,
	SupContact1 varchar(10) not null,
	SupContact2 varchar(10) null,
	constraint pk_sup primary key(SupID)
)create table tbCategory
(
	CatID integer identity(1,1) not null,
	Category varchar(max) not null,
	Other varchar(max) null,
	constraint pk_cat primary key(CatID)
)
create table tbProduct
(
	ProID char(3) not null,
	ProName varchar(max) not null,
	ProQty tinyint not null,
	UPIS	smallmoney not null,
	SUP smallmoney not null,
	Others varchar(max) not null,
	CatID integer not null,
	constraint pk_pro primary key(ProID),
	constraint fk_cat foreign key(CatID)
	references tbCategory(CatID)
	on update cascade
	on delete cascade
)
create table tbImport
(
	ImpID integer identity(1,1) not null,
	ImpDate smalldatetime not null,
	Supplier varchar(50) not null,
	KhFirstName nvarchar(max) collate KHMER_100_BIN not null,
	KhlastName nvarchar(max) collate KHMER_100_BIN not null,
	EnFirstName varchar(max) not null,
	EnLastName varchar(max) not null,
	ImpTotal smallmoney not null,
	EmpID char(5) not null,
	SupID integer not null,
	constraint pk_imp primary key(ImpID),
	constraint fk_emp foreign key(EmpID)
	references tbEmployee(EmpID)
	on update cascade
	on delete cascade,
	constraint fk_sup foreign key(SupID)
	references tbSupplier(SupID)
	on update cascade
	on delete cascade
)
create table tbSale
(
	SaleID integer identity(1,1) not null,
	SaleDate smalldatetime not null,
	KhFirstName nvarchar(max) collate KHMER_100_BIN not null,
	KhlastName nvarchar(max) collate KHMER_100_BIN not null,
	EnFirstName varchar(max) not null,
	EnLastName varchar(max) not null,
	SaleTotal smallmoney not null,
	EmpID char(5) not null,
	CusID integer not null,
	constraint pk_sale primary key (SaleID),
	constraint fk_emp1 foreign key (EmpID)
	references tbEmployee(EmpID)
	on update cascade
	on delete cascade,
	constraint fk_cus foreign key (CusID)
	references tbCustomer (CusID)
	on update cascade
	on delete cascade
)
create table tbImportDetail
(
	ProID char(3) not null,
	ImpID integer not null,
	ProName varchar(max) not null,
	ImpQty tinyint not null,
	UPIS smallmoney not null,
	ImpAmount smallmoney not null,
	constraint pk_imp_de primary key (ProID, ImpID),
	constraint fk_pro foreign key (ProID)
	references tbProduct(ProID)
	on update cascade
	on delete cascade,
	constraint fk_imp foreign key(ImpID)
	references tbImport(ImpID)
	on update cascade
	on delete cascade
)
create table tbSaleDetail
(
	ProID char(3) not null,
	SaleID integer not null,
	ProName varchar(max) not null,
	SaleQty tinyint not null,
	SUP smallmoney not null,
	SaleAmout smallmoney not null,
	constraint pk_sale_de primary key(ProID, SaleID),
	constraint fk_pro1 foreign key (ProID)
	references tbProduct(ProID)
	on update cascade
	on delete cascade,
	constraint fk_sale foreign key (SaleID)
	references tbSale (SaleID)
	on update cascade
	on delete cascade
)