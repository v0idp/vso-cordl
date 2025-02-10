#pragma once
// IWYU pragma private; include "VROSC/SpatialAnchorsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialAnchorsManager)
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class AnchorState;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class IAnchoredObject;
}
namespace VROSC {
class SpatialAnchorsManager_AnchorData;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass6_0;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass6_1;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass6_2;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass7_0;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass7_1;
}
namespace VROSC {
class TransformAnchor;
}
// Forward declare root types
namespace VROSC {
class SpatialAnchorsManager;
}
namespace VROSC {
class SpatialAnchorsManager_AnchorData;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass6_0;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass6_1;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass6_2;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass7_0;
}
namespace VROSC {
class SpatialAnchorsManager___c__DisplayClass7_1;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager);
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager_AnchorData);
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0);
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1);
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager___c__DisplayClass6_2);
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0);
MARK_REF_PTR_T(::VROSC::SpatialAnchorsManager___c__DisplayClass7_1);
// Dependencies System.Guid, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager/AnchorData
class CORDL_TYPE SpatialAnchorsManager_AnchorData : public ::System::Object {
public:
// Declarations
/// @brief Field SpaceHandle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpaceHandle, put=__cordl_internal_set_SpaceHandle)) uint64_t  SpaceHandle;

/// @brief Field SpaceUuid, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_SpaceUuid, put=__cordl_internal_set_SpaceUuid)) ::System::Guid  SpaceUuid;

/// @brief Field TransformAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformAnchor, put=__cordl_internal_set_TransformAnchor)) ::UnityW<::VROSC::TransformAnchor>  TransformAnchor;

static inline ::VROSC::SpatialAnchorsManager_AnchorData* New_ctor() ;

constexpr uint64_t const& __cordl_internal_get_SpaceHandle() const;

constexpr uint64_t& __cordl_internal_get_SpaceHandle() ;

constexpr ::System::Guid const& __cordl_internal_get_SpaceUuid() const;

constexpr ::System::Guid& __cordl_internal_get_SpaceUuid() ;

constexpr ::UnityW<::VROSC::TransformAnchor> const& __cordl_internal_get_TransformAnchor() const;

constexpr ::UnityW<::VROSC::TransformAnchor>& __cordl_internal_get_TransformAnchor() ;

constexpr void __cordl_internal_set_SpaceHandle(uint64_t  value) ;

constexpr void __cordl_internal_set_SpaceUuid(::System::Guid  value) ;

constexpr void __cordl_internal_set_TransformAnchor(::UnityW<::VROSC::TransformAnchor>  value) ;

/// @brief Method .ctor, addr 0x172a0e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager_AnchorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager_AnchorData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager_AnchorData(SpatialAnchorsManager_AnchorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager_AnchorData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager_AnchorData(SpatialAnchorsManager_AnchorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1042};

/// @brief Field SpaceHandle, offset: 0x10, size: 0x8, def value: None
 uint64_t  ___SpaceHandle;

/// @brief Field SpaceUuid, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  ___SpaceUuid;

/// @brief Field TransformAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformAnchor>  ___TransformAnchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager_AnchorData, ___SpaceHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager_AnchorData, ___SpaceUuid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager_AnchorData, ___TransformAnchor) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager_AnchorData, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager/<>c__DisplayClass6_0
class CORDL_TYPE SpatialAnchorsManager___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::SpatialAnchorsManager>  __4__this;

/// @brief Field onComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action*  onComplete;

/// @brief Field preparedAnchorsCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_preparedAnchorsCount, put=__cordl_internal_set_preparedAnchorsCount)) int32_t  preparedAnchorsCount;

static inline ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0* New_ctor() ;

constexpr ::UnityW<::VROSC::SpatialAnchorsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::SpatialAnchorsManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action*& __cordl_internal_get_onComplete() ;

constexpr int32_t const& __cordl_internal_get_preparedAnchorsCount() const;

constexpr int32_t& __cordl_internal_get_preparedAnchorsCount() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::SpatialAnchorsManager>  value) ;

constexpr void __cordl_internal_set_onComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_preparedAnchorsCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x1729c70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager___c__DisplayClass6_0(SpatialAnchorsManager___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager___c__DisplayClass6_0(SpatialAnchorsManager___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1043};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::SpatialAnchorsManager>  _____4__this;

/// @brief Field preparedAnchorsCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___preparedAnchorsCount;

/// @brief Field onComplete, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0, ___preparedAnchorsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0, ___onComplete) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager___c__DisplayClass6_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager/<>c__DisplayClass6_1
class CORDL_TYPE SpatialAnchorsManager___c__DisplayClass6_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*  CS$__8__locals1;

/// @brief Field anchor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>  anchor;

static inline ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1* New_ctor() ;

/// @brief Method <SaveSpatialAnchors>b__0, addr 0x172a2f0, size 0x3d8, virtual false, abstract: false, final false
inline void _SaveSpatialAnchors_b__0(bool  success) ;

constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*> const& __cordl_internal_get_anchor() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>& __cordl_internal_get_anchor() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*  value) ;

constexpr void __cordl_internal_set_anchor(::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>  value) ;

/// @brief Method .ctor, addr 0x1729c78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager___c__DisplayClass6_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass6_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager___c__DisplayClass6_1(SpatialAnchorsManager___c__DisplayClass6_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass6_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager___c__DisplayClass6_1(SpatialAnchorsManager___c__DisplayClass6_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1044};

/// @brief Field anchor, offset: 0x10, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>  ___anchor;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1, ___anchor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager___c__DisplayClass6_1, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager/<>c__DisplayClass6_2
class CORDL_TYPE SpatialAnchorsManager___c__DisplayClass6_2 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals2, put=__cordl_internal_set_CS$__8__locals2)) ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*  CS$__8__locals2;

/// @brief Field newAnchorData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_newAnchorData, put=__cordl_internal_set_newAnchorData)) ::VROSC::SpatialAnchorsManager_AnchorData*  newAnchorData;

static inline ::VROSC::SpatialAnchorsManager___c__DisplayClass6_2* New_ctor() ;

/// @brief Method <SaveSpatialAnchors>b__1, addr 0x172a8ec, size 0x22c, virtual false, abstract: false, final false
inline void _SaveSpatialAnchors_b__1(bool  success) ;

constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1* const& __cordl_internal_get_CS$__8__locals2() const;

constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*& __cordl_internal_get_CS$__8__locals2() ;

constexpr ::VROSC::SpatialAnchorsManager_AnchorData* const& __cordl_internal_get_newAnchorData() const;

constexpr ::VROSC::SpatialAnchorsManager_AnchorData*& __cordl_internal_get_newAnchorData() ;

constexpr void __cordl_internal_set_CS$__8__locals2(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*  value) ;

constexpr void __cordl_internal_set_newAnchorData(::VROSC::SpatialAnchorsManager_AnchorData*  value) ;

/// @brief Method .ctor, addr 0x172a6c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager___c__DisplayClass6_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass6_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager___c__DisplayClass6_2(SpatialAnchorsManager___c__DisplayClass6_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass6_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager___c__DisplayClass6_2(SpatialAnchorsManager___c__DisplayClass6_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1045};

/// @brief Field newAnchorData, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SpatialAnchorsManager_AnchorData*  ___newAnchorData;

/// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*  ___CS$__8__locals2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_2, ___newAnchorData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass6_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager___c__DisplayClass6_2, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager/<>c__DisplayClass7_0
class CORDL_TYPE SpatialAnchorsManager___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::SpatialAnchorsManager>  __4__this;

/// @brief Field <>9__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  __9__1;

/// @brief Field anchoredObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchoredObject, put=__cordl_internal_set_anchoredObject)) ::VROSC::IAnchoredObject*  anchoredObject;

/// @brief Field onFailure, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onSuccess;

static inline ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <LoadFrom>b__0, addr 0x172ab18, size 0x674, virtual false, abstract: false, final false
inline void _LoadFrom_b__0(::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>  anchors) ;

/// @brief Method <LoadFrom>b__1, addr 0x172b1b4, size 0x228, virtual false, abstract: false, final false
inline void _LoadFrom_b__1(bool  success, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

constexpr ::UnityW<::VROSC::SpatialAnchorsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::SpatialAnchorsManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get___9__1() ;

constexpr ::VROSC::IAnchoredObject* const& __cordl_internal_get_anchoredObject() const;

constexpr ::VROSC::IAnchoredObject*& __cordl_internal_get_anchoredObject() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::SpatialAnchorsManager>  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_anchoredObject(::VROSC::IAnchoredObject*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// @brief Method .ctor, addr 0x172a0d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager___c__DisplayClass7_0(SpatialAnchorsManager___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager___c__DisplayClass7_0(SpatialAnchorsManager___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1046};

/// @brief Field onFailure, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::SpatialAnchorsManager>  _____4__this;

/// @brief Field anchoredObject, offset: 0x20, size: 0x8, def value: None
 ::VROSC::IAnchoredObject*  ___anchoredObject;

/// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___onSuccess;

/// @brief Field <>9__1, offset: 0x30, size: 0x8, def value: None
 ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0, ___onFailure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0, ___anchoredObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0, ___onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0, _____9__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager/<>c__DisplayClass7_1
class CORDL_TYPE SpatialAnchorsManager___c__DisplayClass7_1 : public ::System::Object {
public:
// Declarations
/// @brief Field anchorState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorState, put=__cordl_internal_set_anchorState)) ::VROSC::AnchorState*  anchorState;

static inline ::VROSC::SpatialAnchorsManager___c__DisplayClass7_1* New_ctor() ;

/// @brief Method <LoadFrom>b__2, addr 0x172b3dc, size 0x28, virtual false, abstract: false, final false
inline void _LoadFrom_b__2(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  unboundAnchor, bool  success) ;

constexpr ::VROSC::AnchorState* const& __cordl_internal_get_anchorState() const;

constexpr ::VROSC::AnchorState*& __cordl_internal_get_anchorState() ;

constexpr void __cordl_internal_set_anchorState(::VROSC::AnchorState*  value) ;

/// @brief Method .ctor, addr 0x172b18c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager___c__DisplayClass7_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass7_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager___c__DisplayClass7_1(SpatialAnchorsManager___c__DisplayClass7_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager___c__DisplayClass7_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager___c__DisplayClass7_1(SpatialAnchorsManager___c__DisplayClass7_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1047};

/// @brief Field anchorState, offset: 0x10, size: 0x8, def value: None
 ::VROSC::AnchorState*  ___anchorState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager___c__DisplayClass7_1, ___anchorState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager___c__DisplayClass7_1, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpatialAnchorsManager
class CORDL_TYPE SpatialAnchorsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnchorData = ::VROSC::SpatialAnchorsManager_AnchorData;

using __c__DisplayClass6_0 = ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0;

using __c__DisplayClass6_1 = ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1;

using __c__DisplayClass6_2 = ::VROSC::SpatialAnchorsManager___c__DisplayClass6_2;

using __c__DisplayClass7_0 = ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0;

using __c__DisplayClass7_1 = ::VROSC::SpatialAnchorsManager___c__DisplayClass7_1;

/// @brief Field _anchorLocalizationTimeout, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__anchorLocalizationTimeout, put=__cordl_internal_set__anchorLocalizationTimeout)) float_t  _anchorLocalizationTimeout;

/// @brief Field _anchors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__anchors, put=__cordl_internal_set__anchors)) ::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>*  _anchors;

/// @brief Method Awake, addr 0x172953c, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteAnchors, addr 0x172a140, size 0x12c, virtual false, abstract: false, final false
inline void DeleteAnchors(::VROSC::IAnchoredObject*  anchoredObject) ;

/// @brief Method LoadFrom, addr 0x1729d60, size 0x378, virtual false, abstract: false, final false
inline void LoadFrom(::VROSC::IAnchoredObject*  anchoredObject, ::System::Collections::Generic::List_1<::StringW>*  spatialAnchorsUuids, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadingSession, addr 0x172972c, size 0x50, virtual false, abstract: false, final false
inline void LoadingSession(::StringW  sessionId, bool  isDefault) ;

static inline ::VROSC::SpatialAnchorsManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1729634, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SaveSpatialAnchors, addr 0x172977c, size 0x4f4, virtual false, abstract: false, final false
inline void SaveSpatialAnchors(::System::Action*  onComplete) ;

constexpr float_t const& __cordl_internal_get__anchorLocalizationTimeout() const;

constexpr float_t& __cordl_internal_get__anchorLocalizationTimeout() ;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>* const& __cordl_internal_get__anchors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>*& __cordl_internal_get__anchors() ;

constexpr void __cordl_internal_set__anchorLocalizationTimeout(float_t  value) ;

constexpr void __cordl_internal_set__anchors(::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>*  value) ;

/// @brief Method .ctor, addr 0x172a26c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorsManager(SpatialAnchorsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorsManager(SpatialAnchorsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1048};

/// @brief Field _anchorLocalizationTimeout, offset: 0x20, size: 0x4, def value: None
 float_t  ____anchorLocalizationTimeout;

/// @brief Field _anchors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>*  ____anchors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpatialAnchorsManager, ____anchorLocalizationTimeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpatialAnchorsManager, ____anchors) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpatialAnchorsManager, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SpatialAnchorsManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager*, "VROSC", "SpatialAnchorsManager");
NEED_NO_BOX(::VROSC::SpatialAnchorsManager_AnchorData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager_AnchorData*, "VROSC", "SpatialAnchorsManager/AnchorData");
NEED_NO_BOX(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*, "VROSC", "SpatialAnchorsManager/<>c__DisplayClass6_0");
NEED_NO_BOX(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*, "VROSC", "SpatialAnchorsManager/<>c__DisplayClass6_1");
NEED_NO_BOX(::VROSC::SpatialAnchorsManager___c__DisplayClass6_2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager___c__DisplayClass6_2*, "VROSC", "SpatialAnchorsManager/<>c__DisplayClass6_2");
NEED_NO_BOX(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*, "VROSC", "SpatialAnchorsManager/<>c__DisplayClass7_0");
NEED_NO_BOX(::VROSC::SpatialAnchorsManager___c__DisplayClass7_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpatialAnchorsManager___c__DisplayClass7_1*, "VROSC", "SpatialAnchorsManager/<>c__DisplayClass7_1");
