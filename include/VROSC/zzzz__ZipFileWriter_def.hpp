#pragma once
// IWYU pragma private; include "VROSC/ZipFileWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipFileWriter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct ZipFileWriter__CompressFolderToZip_d__4;
}
namespace VROSC {
struct ZipFileWriter__ExtractZipToFolder_d__3;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass3_0;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass3_1;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass4_0;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass4_1;
}
// Forward declare root types
namespace VROSC {
class ZipFileWriter;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass3_0;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass3_1;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass4_0;
}
namespace VROSC {
class ZipFileWriter___c__DisplayClass4_1;
}
namespace VROSC {
struct ZipFileWriter__CompressFolderToZip_d__4;
}
namespace VROSC {
struct ZipFileWriter__ExtractZipToFolder_d__3;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ZipFileWriter);
MARK_REF_PTR_T(::VROSC::ZipFileWriter___c__DisplayClass3_0);
MARK_REF_PTR_T(::VROSC::ZipFileWriter___c__DisplayClass3_1);
MARK_REF_PTR_T(::VROSC::ZipFileWriter___c__DisplayClass4_0);
MARK_REF_PTR_T(::VROSC::ZipFileWriter___c__DisplayClass4_1);
MARK_VAL_T(::VROSC::ZipFileWriter__CompressFolderToZip_d__4);
MARK_VAL_T(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ZipFileWriter/<>c__DisplayClass3_0
class CORDL_TYPE ZipFileWriter___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::ZipFileWriter*  __4__this;

/// @brief Field destination, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::StringW  destination;

/// @brief Field failureCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureCallback, put=__cordl_internal_set_failureCallback)) ::System::Action_1<::VROSC::Error>*  failureCallback;

/// @brief Field originPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_originPath, put=__cordl_internal_set_originPath)) ::StringW  originPath;

/// @brief Field successCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action*  successCallback;

static inline ::VROSC::ZipFileWriter___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <ExtractZipToFolder>b__0, addr 0x1851a58, size 0x220, virtual false, abstract: false, final false
inline void _ExtractZipToFolder_b__0() ;

constexpr ::VROSC::ZipFileWriter* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::ZipFileWriter*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_destination() const;

constexpr ::StringW& __cordl_internal_get_destination() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_failureCallback() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_failureCallback() ;

constexpr ::StringW const& __cordl_internal_get_originPath() const;

constexpr ::StringW& __cordl_internal_get_originPath() ;

constexpr ::System::Action* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___4__this(::VROSC::ZipFileWriter*  value) ;

constexpr void __cordl_internal_set_destination(::StringW  value) ;

constexpr void __cordl_internal_set_failureCallback(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_originPath(::StringW  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1851a50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFileWriter___c__DisplayClass3_0(ZipFileWriter___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFileWriter___c__DisplayClass3_0(ZipFileWriter___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{444};

/// @brief Field destination, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___destination;

/// @brief Field originPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___originPath;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::ZipFileWriter*  _____4__this;

/// @brief Field successCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___successCallback;

/// @brief Field failureCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___failureCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_0, ___destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_0, ___originPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_0, ___successCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_0, ___failureCallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter___c__DisplayClass3_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ZipFileWriter/<>c__DisplayClass3_1
class CORDL_TYPE ZipFileWriter___c__DisplayClass3_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::ZipFileWriter___c__DisplayClass3_0*  CS$__8__locals1;

/// @brief Field e, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_e, put=__cordl_internal_set_e)) ::System::Exception*  e;

static inline ::VROSC::ZipFileWriter___c__DisplayClass3_1* New_ctor() ;

/// @brief Method <ExtractZipToFolder>b__1, addr 0x1851c80, size 0x84, virtual false, abstract: false, final false
inline void _ExtractZipToFolder_b__1() ;

constexpr ::VROSC::ZipFileWriter___c__DisplayClass3_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::ZipFileWriter___c__DisplayClass3_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Exception* const& __cordl_internal_get_e() const;

constexpr ::System::Exception*& __cordl_internal_get_e() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::ZipFileWriter___c__DisplayClass3_0*  value) ;

constexpr void __cordl_internal_set_e(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x1851c78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter___c__DisplayClass3_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass3_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFileWriter___c__DisplayClass3_1(ZipFileWriter___c__DisplayClass3_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass3_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFileWriter___c__DisplayClass3_1(ZipFileWriter___c__DisplayClass3_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{445};

/// @brief Field e, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___e;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::ZipFileWriter___c__DisplayClass3_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_1, ___e) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass3_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter___c__DisplayClass3_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ZipFileWriter/<>c__DisplayClass4_0
class CORDL_TYPE ZipFileWriter___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::ZipFileWriter*  __4__this;

/// @brief Field destinationPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationPath, put=__cordl_internal_set_destinationPath)) ::StringW  destinationPath;

/// @brief Field failureCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureCallback, put=__cordl_internal_set_failureCallback)) ::System::Action_1<::VROSC::Error>*  failureCallback;

/// @brief Field origin, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::StringW  origin;

/// @brief Field successCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action*  successCallback;

static inline ::VROSC::ZipFileWriter___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <CompressFolderToZip>b__0, addr 0x1851d0c, size 0x224, virtual false, abstract: false, final false
inline void _CompressFolderToZip_b__0() ;

constexpr ::VROSC::ZipFileWriter* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::ZipFileWriter*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_destinationPath() const;

constexpr ::StringW& __cordl_internal_get_destinationPath() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_failureCallback() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_failureCallback() ;

constexpr ::StringW const& __cordl_internal_get_origin() const;

constexpr ::StringW& __cordl_internal_get_origin() ;

constexpr ::System::Action* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___4__this(::VROSC::ZipFileWriter*  value) ;

constexpr void __cordl_internal_set_destinationPath(::StringW  value) ;

constexpr void __cordl_internal_set_failureCallback(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_origin(::StringW  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1851d04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFileWriter___c__DisplayClass4_0(ZipFileWriter___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFileWriter___c__DisplayClass4_0(ZipFileWriter___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{446};

/// @brief Field destinationPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___destinationPath;

/// @brief Field origin, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___origin;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::ZipFileWriter*  _____4__this;

/// @brief Field successCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___successCallback;

/// @brief Field failureCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___failureCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_0, ___destinationPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_0, ___origin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_0, ___successCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_0, ___failureCallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter___c__DisplayClass4_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ZipFileWriter/<>c__DisplayClass4_1
class CORDL_TYPE ZipFileWriter___c__DisplayClass4_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::ZipFileWriter___c__DisplayClass4_0*  CS$__8__locals1;

/// @brief Field e, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_e, put=__cordl_internal_set_e)) ::System::Exception*  e;

static inline ::VROSC::ZipFileWriter___c__DisplayClass4_1* New_ctor() ;

/// @brief Method <CompressFolderToZip>b__1, addr 0x1851f38, size 0x84, virtual false, abstract: false, final false
inline void _CompressFolderToZip_b__1() ;

constexpr ::VROSC::ZipFileWriter___c__DisplayClass4_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::ZipFileWriter___c__DisplayClass4_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Exception* const& __cordl_internal_get_e() const;

constexpr ::System::Exception*& __cordl_internal_get_e() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::ZipFileWriter___c__DisplayClass4_0*  value) ;

constexpr void __cordl_internal_set_e(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x1851f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter___c__DisplayClass4_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass4_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFileWriter___c__DisplayClass4_1(ZipFileWriter___c__DisplayClass4_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter___c__DisplayClass4_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFileWriter___c__DisplayClass4_1(ZipFileWriter___c__DisplayClass4_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{447};

/// @brief Field e, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___e;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::ZipFileWriter___c__DisplayClass4_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_1, ___e) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter___c__DisplayClass4_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter___c__DisplayClass4_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ZipFileWriter/<CompressFolderToZip>d__4
struct CORDL_TYPE ZipFileWriter__CompressFolderToZip_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1851fbc, size 0x304, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18522c0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter__CompressFolderToZip_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::ZipFileWriter*", modifiers: "", def_value: None }, CppParam { name: "successCallback", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "failureCallback", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ZipFileWriter__CompressFolderToZip_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  origin, ::VROSC::ZipFileWriter*  __4__this, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback, ::StringW  destination, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field origin, offset: 0x20, size: 0x8, def value: None
 ::StringW  origin;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::ZipFileWriter*  __4__this;

/// @brief Field successCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  successCallback;

/// @brief Field failureCallback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  failureCallback;

/// @brief Field destination, offset: 0x40, size: 0x8, def value: None
 ::StringW  destination;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, origin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, successCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, failureCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, destination) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter__CompressFolderToZip_d__4, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ZipFileWriter/<ExtractZipToFolder>d__3
struct CORDL_TYPE ZipFileWriter__ExtractZipToFolder_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1852328, size 0x2fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1852624, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter__ExtractZipToFolder_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::ZipFileWriter*", modifiers: "", def_value: None }, CppParam { name: "successCallback", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "failureCallback", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ZipFileWriter__ExtractZipToFolder_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  destination, ::VROSC::ZipFileWriter*  __4__this, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback, ::StringW  origin, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{449};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field destination, offset: 0x20, size: 0x8, def value: None
 ::StringW  destination;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::ZipFileWriter*  __4__this;

/// @brief Field successCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  successCallback;

/// @brief Field failureCallback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  failureCallback;

/// @brief Field origin, offset: 0x40, size: 0x8, def value: None
 ::StringW  origin;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, successCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, failureCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, origin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ZipFileWriter
class CORDL_TYPE ZipFileWriter : public ::System::Object {
public:
// Declarations
using _CompressFolderToZip_d__4 = ::VROSC::ZipFileWriter__CompressFolderToZip_d__4;

using _ExtractZipToFolder_d__3 = ::VROSC::ZipFileWriter__ExtractZipToFolder_d__3;

using __c__DisplayClass3_0 = ::VROSC::ZipFileWriter___c__DisplayClass3_0;

using __c__DisplayClass3_1 = ::VROSC::ZipFileWriter___c__DisplayClass3_1;

using __c__DisplayClass4_0 = ::VROSC::ZipFileWriter___c__DisplayClass4_0;

using __c__DisplayClass4_1 = ::VROSC::ZipFileWriter___c__DisplayClass4_1;

/// @brief Field _zipCallbacks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipCallbacks, put=__cordl_internal_set__zipCallbacks)) ::System::Collections::Generic::List_1<::System::Action*>*  _zipCallbacks;

/// @brief Method CompressFolderToZip, addr 0x1851528, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CompressFolderToZip(::StringW  origin, ::StringW  destination, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback) ;

/// @brief Method DeleteZip, addr 0x184d42c, size 0x16c, virtual false, abstract: false, final false
inline void DeleteZip(::StringW  path) ;

/// @brief Method ExtractZipToFolder, addr 0x184fb9c, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ExtractZipToFolder(::StringW  origin, ::StringW  destination, ::System::Action*  successCallback, ::System::Action_1<::VROSC::Error>*  failureCallback) ;

static inline ::VROSC::ZipFileWriter* New_ctor() ;

/// @brief Method Tick, addr 0x184b358, size 0xcc, virtual false, abstract: false, final false
inline void Tick() ;

constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get__zipCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get__zipCallbacks() ;

constexpr void __cordl_internal_set__zipCallbacks(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

/// @brief Method .ctor, addr 0x184d91c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFileWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFileWriter(ZipFileWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFileWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFileWriter(ZipFileWriter const& ) = delete;

/// @brief Field ZipExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  ZipExtension{u"zip"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{450};

/// @brief Field _zipCallbacks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action*>*  ____zipCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ZipFileWriter, ____zipCallbacks) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ZipFileWriter, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ZipFileWriter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter*, "VROSC", "ZipFileWriter");
NEED_NO_BOX(::VROSC::ZipFileWriter___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter___c__DisplayClass3_0*, "VROSC", "ZipFileWriter/<>c__DisplayClass3_0");
NEED_NO_BOX(::VROSC::ZipFileWriter___c__DisplayClass3_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter___c__DisplayClass3_1*, "VROSC", "ZipFileWriter/<>c__DisplayClass3_1");
NEED_NO_BOX(::VROSC::ZipFileWriter___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter___c__DisplayClass4_0*, "VROSC", "ZipFileWriter/<>c__DisplayClass4_0");
NEED_NO_BOX(::VROSC::ZipFileWriter___c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter___c__DisplayClass4_1*, "VROSC", "ZipFileWriter/<>c__DisplayClass4_1");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter__CompressFolderToZip_d__4, "VROSC", "ZipFileWriter/<CompressFolderToZip>d__4");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ZipFileWriter__ExtractZipToFolder_d__3, "VROSC", "ZipFileWriter/<ExtractZipToFolder>d__3");
