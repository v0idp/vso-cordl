#pragma once
// IWYU pragma private; include "VROSC/CommunitySessionsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__SessionsDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommunitySessionsDataController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace VROSC {
class CommunitySessionsDataController___c;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass10_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass11_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass2_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass4_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass5_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass6_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass7_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass8_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass9_0;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SessionUIData;
}
namespace VROSC {
class Session;
}
// Forward declare root types
namespace VROSC {
class CommunitySessionsDataController;
}
namespace VROSC {
class CommunitySessionsDataController___c;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass10_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass11_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass2_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass4_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass5_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass6_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass7_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass8_0;
}
namespace VROSC {
class CommunitySessionsDataController___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass10_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass11_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass2_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass4_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass5_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass6_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass7_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass8_0);
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataController___c__DisplayClass9_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c
class CORDL_TYPE CommunitySessionsDataController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::CommunitySessionsDataController___c*  __9;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Func_2<::System::Object*,::StringW>*  __9__2_2;

static inline ::VROSC::CommunitySessionsDataController___c* New_ctor() ;

/// @brief Method <LoadCloudData>b__2_2, addr 0x1856750, size 0x24, virtual false, abstract: false, final false
inline ::StringW _LoadCloudData_b__2_2(::System::Object*  x) ;

/// @brief Method .ctor, addr 0x1856748, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::CommunitySessionsDataController___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Object*,::StringW>* getStaticF___9__2_2() ;

static inline void setStaticF___9(::VROSC::CommunitySessionsDataController___c*  value) ;

static inline void setStaticF___9__2_2(::System::Func_2<::System::Object*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c(CommunitySessionsDataController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c(CommunitySessionsDataController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass10_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::VROSC::Session*  session;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <AddSessionDownload>b__0, addr 0x1856774, size 0x40, virtual false, abstract: false, final false
inline void _AddSessionDownload_b__0(::StringW  id) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::Session* const& __cordl_internal_get_session() const;

constexpr ::VROSC::Session*& __cordl_internal_get_session() ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_session(::VROSC::Session*  value) ;

/// @brief Method .ctor, addr 0x1855cf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass10_0(CommunitySessionsDataController___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass10_0(CommunitySessionsDataController___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{458};

/// @brief Field session, offset: 0x10, size: 0x8, def value: None
 ::VROSC::Session*  ___session;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass10_0, ___session) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass10_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass10_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass11_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::VROSC::Session*  session;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <AddSessionPreviewPlay>b__0, addr 0x18567b4, size 0x40, virtual false, abstract: false, final false
inline void _AddSessionPreviewPlay_b__0(::StringW  id) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::Session* const& __cordl_internal_get_session() const;

constexpr ::VROSC::Session*& __cordl_internal_get_session() ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_session(::VROSC::Session*  value) ;

/// @brief Method .ctor, addr 0x1855fac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass11_0(CommunitySessionsDataController___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass11_0(CommunitySessionsDataController___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{459};

/// @brief Field session, offset: 0x10, size: 0x8, def value: None
 ::VROSC::Session*  ___session;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass11_0, ___session) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass11_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass2_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CommunitySessionsDataController*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <LoadCloudData>b__0, addr 0x18567f4, size 0x1190, virtual false, abstract: false, final false
inline void _LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data) ;

/// @brief Method <LoadCloudData>b__1, addr 0x1857984, size 0x38, virtual false, abstract: false, final false
inline void _LoadCloudData_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::CommunitySessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CommunitySessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CommunitySessionsDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1854928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass2_0(CommunitySessionsDataController___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass2_0(CommunitySessionsDataController___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{460};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CommunitySessionsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass2_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass2_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass2_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass2_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass4_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CommunitySessionsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <SaveSessionToCloud>b__0, addr 0x18579c4, size 0x120, virtual false, abstract: false, final false
inline void _SaveSessionToCloud_b__0() ;

constexpr ::VROSC::CommunitySessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CommunitySessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CommunitySessionsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x18579bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass4_0(CommunitySessionsDataController___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass4_0(CommunitySessionsDataController___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{461};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CommunitySessionsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass4_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass5_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CommunitySessionsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <RemoveSession>b__0, addr 0x1857b64, size 0x88, virtual false, abstract: false, final false
inline void _RemoveSession_b__0() ;

constexpr ::VROSC::CommunitySessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CommunitySessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CommunitySessionsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1857b5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass5_0(CommunitySessionsDataController___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass5_0(CommunitySessionsDataController___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{462};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CommunitySessionsDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass5_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass5_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass5_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass6_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::VROSC::Session*  session;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <AddSessionUpVote>b__0, addr 0x1857bf4, size 0x40, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__0(::StringW  id) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::Session* const& __cordl_internal_get_session() const;

constexpr ::VROSC::Session*& __cordl_internal_get_session() ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_session(::VROSC::Session*  value) ;

/// @brief Method .ctor, addr 0x1857bec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass6_0(CommunitySessionsDataController___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass6_0(CommunitySessionsDataController___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{463};

/// @brief Field session, offset: 0x10, size: 0x8, def value: None
 ::VROSC::Session*  ___session;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass6_0, ___session) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass6_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass7_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::VROSC::Session*  session;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <RemoveSessionUpVote>b__0, addr 0x1857c3c, size 0x40, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::Session* const& __cordl_internal_get_session() const;

constexpr ::VROSC::Session*& __cordl_internal_get_session() ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_session(::VROSC::Session*  value) ;

/// @brief Method .ctor, addr 0x1857c34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass7_0(CommunitySessionsDataController___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass7_0(CommunitySessionsDataController___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{464};

/// @brief Field session, offset: 0x10, size: 0x8, def value: None
 ::VROSC::Session*  ___session;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass7_0, ___session) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass7_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass8_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_2<::StringW,::VROSC::Session*>*  onSuccess;

/// @brief Field session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::VROSC::Session*  session;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <AddSessionFavorite>b__0, addr 0x1857c84, size 0x40, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__0(::StringW  id) ;

constexpr ::System::Action_2<::StringW,::VROSC::Session*>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_2<::StringW,::VROSC::Session*>*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::Session* const& __cordl_internal_get_session() const;

constexpr ::VROSC::Session*& __cordl_internal_get_session() ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_2<::StringW,::VROSC::Session*>*  value) ;

constexpr void __cordl_internal_set_session(::VROSC::Session*  value) ;

/// @brief Method .ctor, addr 0x1857c7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass8_0(CommunitySessionsDataController___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass8_0(CommunitySessionsDataController___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{465};

/// @brief Field session, offset: 0x10, size: 0x8, def value: None
 ::VROSC::Session*  ___session;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::StringW,::VROSC::Session*>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass8_0, ___session) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass8_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController/<>c__DisplayClass9_0
class CORDL_TYPE CommunitySessionsDataController___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::CommunitySessionsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::CommunitySessionsDataController___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <RemoveSessionFavorite>b__0, addr 0x1857ccc, size 0x5c, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__0() ;

constexpr ::VROSC::CommunitySessionsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::CommunitySessionsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::CommunitySessionsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1857cc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController___c__DisplayClass9_0(CommunitySessionsDataController___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController___c__DisplayClass9_0(CommunitySessionsDataController___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{466};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::CommunitySessionsDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass9_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass9_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CommunitySessionsDataController___c__DisplayClass9_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController___c__DisplayClass9_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SessionsDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataController
class CORDL_TYPE CommunitySessionsDataController : public ::VROSC::SessionsDataController {
public:
// Declarations
using __c = ::VROSC::CommunitySessionsDataController___c;

using __c__DisplayClass10_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass10_0;

using __c__DisplayClass11_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass11_0;

using __c__DisplayClass2_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass2_0;

using __c__DisplayClass4_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass4_0;

using __c__DisplayClass5_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass5_0;

using __c__DisplayClass6_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass6_0;

using __c__DisplayClass7_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass7_0;

using __c__DisplayClass8_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::VROSC::CommunitySessionsDataController___c__DisplayClass9_0;

/// @brief Field _isWaitingForData, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWaitingForData, put=__cordl_internal_set__isWaitingForData)) bool  _isWaitingForData;

/// @brief Method AddFavoriteSession, addr 0x1855fb4, size 0x118, virtual false, abstract: false, final false
inline void AddFavoriteSession(::VROSC::Session*  session) ;

/// @brief Method AddSessionDownload, addr 0x1855a44, size 0x2b0, virtual false, abstract: false, final false
inline void AddSessionDownload(::StringW  sessionId, ::StringW  userId, ::StringW  userName, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddSessionFavorite, addr 0x1855620, size 0x2b0, virtual false, abstract: false, final false
inline void AddSessionFavorite(::StringW  sessionId, ::StringW  userId, ::StringW  userName, ::System::Action_2<::StringW,::VROSC::Session*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddSessionPreviewPlay, addr 0x1855cfc, size 0x2b0, virtual false, abstract: false, final false
inline void AddSessionPreviewPlay(::StringW  sessionId, ::StringW  userId, ::StringW  userName, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddSessionUpVote, addr 0x18551cc, size 0x2b0, virtual false, abstract: false, final false
inline void AddSessionUpVote(::StringW  sessionId, ::StringW  userId, ::StringW  userName, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method GenerateNewSessionId, addr 0x1856558, size 0x54, virtual true, abstract: false, final false
inline ::StringW GenerateNewSessionId() ;

/// @brief Method GetSession, addr 0x1856604, size 0xe8, virtual true, abstract: false, final false
inline ::VROSC::Session* GetSession(::StringW  sessionId) ;

/// @brief Method GetSessionUIData, addr 0x18563c8, size 0x190, virtual true, abstract: false, final false
inline ::VROSC::SessionUIData* GetSessionUIData(::StringW  sessionId) ;

/// @brief Method GetSessionsUIData, addr 0x18560cc, size 0x2fc, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetSessionsUIData() ;

/// @brief Method LoadCloudData, addr 0x1854768, size 0x1c0, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::CommunitySessionsDataController* New_ctor() ;

/// @brief Method RemoveSession, addr 0x185507c, size 0x150, virtual true, abstract: false, final false
inline void RemoveSession(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method RemoveSessionFavorite, addr 0x18558d0, size 0x174, virtual false, abstract: false, final false
inline void RemoveSessionFavorite(::StringW  sessionId, ::StringW  favoriteId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method RemoveSessionUpVote, addr 0x185547c, size 0x1a4, virtual false, abstract: false, final false
inline void RemoveSessionUpVote(::StringW  sessionId, ::StringW  upVoteId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveCloudData, addr 0x1854930, size 0x4, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveSessionToCloud, addr 0x1854934, size 0x748, virtual false, abstract: false, final false
inline void SaveSessionToCloud(::StringW  sessionId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method UserLoggedOut, addr 0x18565ac, size 0x58, virtual true, abstract: false, final false
inline void UserLoggedOut() ;

constexpr bool const& __cordl_internal_get__isWaitingForData() const;

constexpr bool& __cordl_internal_get__isWaitingForData() ;

constexpr void __cordl_internal_set__isWaitingForData(bool  value) ;

/// @brief Method .ctor, addr 0x1854704, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataController(CommunitySessionsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataController(CommunitySessionsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{467};

/// @brief Field _isWaitingForData, offset: 0x30, size: 0x1, def value: None
 bool  ____isWaitingForData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataController, ____isWaitingForData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CommunitySessionsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController*, "VROSC", "CommunitySessionsDataController");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c*, "VROSC", "CommunitySessionsDataController/<>c");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass10_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass10_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass11_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass11_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass2_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass2_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass4_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass4_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass5_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass5_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass6_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass6_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass7_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass7_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass8_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass8_0");
NEED_NO_BOX(::VROSC::CommunitySessionsDataController___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataController___c__DisplayClass9_0*, "VROSC", "CommunitySessionsDataController/<>c__DisplayClass9_0");
