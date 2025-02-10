#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryConstants)
namespace GlobalNamespace {
class BB_OVRTelemetryConstants_AnnotationType;
}
namespace GlobalNamespace {
class BB_OVRTelemetryConstants_MarkerId;
}
namespace GlobalNamespace {
class Editor_OVRTelemetryConstants_AnnotationType;
}
namespace GlobalNamespace {
class Editor_OVRTelemetryConstants_MarkerId;
}
namespace GlobalNamespace {
class OVRManager_OVRTelemetryConstants_AnnotationTypes;
}
namespace GlobalNamespace {
struct OVRManager_OVRTelemetryConstants_ConsentOrigins;
}
namespace GlobalNamespace {
class OVRManager_OVRTelemetryConstants_MarkerId;
}
namespace GlobalNamespace {
class OVRTelemetryConstants_BB;
}
namespace GlobalNamespace {
class OVRTelemetryConstants_Editor;
}
namespace GlobalNamespace {
class OVRTelemetryConstants_OVRManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_OVRTelemetryConstants_ConsentOrigins;
}
namespace GlobalNamespace {
class BB_OVRTelemetryConstants_AnnotationType;
}
namespace GlobalNamespace {
class BB_OVRTelemetryConstants_MarkerId;
}
namespace GlobalNamespace {
class Editor_OVRTelemetryConstants_AnnotationType;
}
namespace GlobalNamespace {
class Editor_OVRTelemetryConstants_MarkerId;
}
namespace GlobalNamespace {
class OVRManager_OVRTelemetryConstants_AnnotationTypes;
}
namespace GlobalNamespace {
class OVRManager_OVRTelemetryConstants_MarkerId;
}
namespace GlobalNamespace {
class OVRTelemetryConstants;
}
namespace GlobalNamespace {
class OVRTelemetryConstants_BB;
}
namespace GlobalNamespace {
class OVRTelemetryConstants_Editor;
}
namespace GlobalNamespace {
class OVRTelemetryConstants_OVRManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins);
MARK_REF_PTR_T(::GlobalNamespace::BB_OVRTelemetryConstants_AnnotationType);
MARK_REF_PTR_T(::GlobalNamespace::BB_OVRTelemetryConstants_MarkerId);
MARK_REF_PTR_T(::GlobalNamespace::Editor_OVRTelemetryConstants_AnnotationType);
MARK_REF_PTR_T(::GlobalNamespace::Editor_OVRTelemetryConstants_MarkerId);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager_OVRTelemetryConstants_AnnotationTypes);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager_OVRTelemetryConstants_MarkerId);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetryConstants);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetryConstants_BB);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetryConstants_Editor);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetryConstants_OVRManager);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/OVRManager/MarkerId
class CORDL_TYPE OVRManager_OVRTelemetryConstants_MarkerId : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_OVRTelemetryConstants_MarkerId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRManager_OVRTelemetryConstants_MarkerId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRManager_OVRTelemetryConstants_MarkerId(OVRManager_OVRTelemetryConstants_MarkerId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRManager_OVRTelemetryConstants_MarkerId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRManager_OVRTelemetryConstants_MarkerId(OVRManager_OVRTelemetryConstants_MarkerId const& ) = delete;

/// @brief Field Consent offset 0xffffffff size 0x4
static constexpr int32_t  Consent{static_cast<int32_t>(0x9b80c82)};

/// @brief Field Init offset 0xffffffff size 0x4
static constexpr int32_t  Init{static_cast<int32_t>(0x9b83dd9)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6559};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_OVRTelemetryConstants_MarkerId, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/OVRManager/AnnotationTypes
class CORDL_TYPE OVRManager_OVRTelemetryConstants_AnnotationTypes : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_OVRTelemetryConstants_AnnotationTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRManager_OVRTelemetryConstants_AnnotationTypes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRManager_OVRTelemetryConstants_AnnotationTypes(OVRManager_OVRTelemetryConstants_AnnotationTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRManager_OVRTelemetryConstants_AnnotationTypes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRManager_OVRTelemetryConstants_AnnotationTypes(OVRManager_OVRTelemetryConstants_AnnotationTypes const& ) = delete;

/// @brief Field EngineVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  EngineVersion{u"developer_platform_version"};

/// @brief Field Origin offset 0xffffffff size 0x8
static constexpr ::ConstString  Origin{u"Origin"};

/// @brief Field ProjectGuid offset 0xffffffff size 0x8
static constexpr ::ConstString  ProjectGuid{u"ProjectGuid"};

/// @brief Field ProjectName offset 0xffffffff size 0x8
static constexpr ::ConstString  ProjectName{u"ProjectName"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6560};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_OVRTelemetryConstants_AnnotationTypes, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryConstants/OVRManager/ConsentOrigins
struct CORDL_TYPE OVRManager_OVRTelemetryConstants_ConsentOrigins {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_OVRTelemetryConstants_ConsentOrigins_Unwrapped
enum struct __OVRManager_OVRTelemetryConstants_ConsentOrigins_Unwrapped : int32_t {
__E_Popup = static_cast<int32_t>(0x0),
__E_Settings = static_cast<int32_t>(0x1),
__E_Legacy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_OVRTelemetryConstants_ConsentOrigins_Unwrapped () const noexcept {
return static_cast<__OVRManager_OVRTelemetryConstants_ConsentOrigins_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_OVRTelemetryConstants_ConsentOrigins() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRManager_OVRTelemetryConstants_ConsentOrigins(int32_t  value__) noexcept;

/// @brief Field Legacy value: I32(2)
static ::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins const Legacy;

/// @brief Field Popup value: I32(0)
static ::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins const Popup;

/// @brief Field Settings value: I32(1)
static ::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins const Settings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRTelemetry::MarkerPoint, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/OVRManager
class CORDL_TYPE OVRTelemetryConstants_OVRManager : public ::System::Object {
public:
// Declarations
using AnnotationTypes = ::GlobalNamespace::OVRManager_OVRTelemetryConstants_AnnotationTypes;

using ConsentOrigins = ::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins;

using MarkerId = ::GlobalNamespace::OVRManager_OVRTelemetryConstants_MarkerId;

/// @brief Field InitPermissionRequest, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InitPermissionRequest, put=setStaticF_InitPermissionRequest)) ::GlobalNamespace::OVRTelemetry_MarkerPoint  InitPermissionRequest;

/// @brief Field InitializeInsightPassthrough, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InitializeInsightPassthrough, put=setStaticF_InitializeInsightPassthrough)) ::GlobalNamespace::OVRTelemetry_MarkerPoint  InitializeInsightPassthrough;

static inline ::GlobalNamespace::OVRTelemetry_MarkerPoint getStaticF_InitPermissionRequest() ;

static inline ::GlobalNamespace::OVRTelemetry_MarkerPoint getStaticF_InitializeInsightPassthrough() ;

static inline void setStaticF_InitPermissionRequest(::GlobalNamespace::OVRTelemetry_MarkerPoint  value) ;

static inline void setStaticF_InitializeInsightPassthrough(::GlobalNamespace::OVRTelemetry_MarkerPoint  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetryConstants_OVRManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants_OVRManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTelemetryConstants_OVRManager(OVRTelemetryConstants_OVRManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants_OVRManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTelemetryConstants_OVRManager(OVRTelemetryConstants_OVRManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6562};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryConstants_OVRManager, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/Editor/MarkerId
class CORDL_TYPE Editor_OVRTelemetryConstants_MarkerId : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Editor_OVRTelemetryConstants_MarkerId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Editor_OVRTelemetryConstants_MarkerId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Editor_OVRTelemetryConstants_MarkerId(Editor_OVRTelemetryConstants_MarkerId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Editor_OVRTelemetryConstants_MarkerId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Editor_OVRTelemetryConstants_MarkerId(Editor_OVRTelemetryConstants_MarkerId const& ) = delete;

/// @brief Field ComponentAdd offset 0xffffffff size 0x4
static constexpr int32_t  ComponentAdd{static_cast<int32_t>(0x9b8197e)};

/// @brief Field Start offset 0xffffffff size 0x4
static constexpr int32_t  Start{static_cast<int32_t>(0x9b83563)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Editor_OVRTelemetryConstants_MarkerId, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/Editor/AnnotationType
class CORDL_TYPE Editor_OVRTelemetryConstants_AnnotationType : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Editor_OVRTelemetryConstants_AnnotationType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Editor_OVRTelemetryConstants_AnnotationType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Editor_OVRTelemetryConstants_AnnotationType(Editor_OVRTelemetryConstants_AnnotationType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Editor_OVRTelemetryConstants_AnnotationType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Editor_OVRTelemetryConstants_AnnotationType(Editor_OVRTelemetryConstants_AnnotationType const& ) = delete;

/// @brief Field ComponentName offset 0xffffffff size 0x8
static constexpr ::ConstString  ComponentName{u"ComponentName"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6564};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Editor_OVRTelemetryConstants_AnnotationType, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/Editor
class CORDL_TYPE OVRTelemetryConstants_Editor : public ::System::Object {
public:
// Declarations
using AnnotationType = ::GlobalNamespace::Editor_OVRTelemetryConstants_AnnotationType;

using MarkerId = ::GlobalNamespace::Editor_OVRTelemetryConstants_MarkerId;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetryConstants_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTelemetryConstants_Editor(OVRTelemetryConstants_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTelemetryConstants_Editor(OVRTelemetryConstants_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryConstants_Editor, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/BB/MarkerId
class CORDL_TYPE BB_OVRTelemetryConstants_MarkerId : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr BB_OVRTelemetryConstants_MarkerId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BB_OVRTelemetryConstants_MarkerId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BB_OVRTelemetryConstants_MarkerId(BB_OVRTelemetryConstants_MarkerId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BB_OVRTelemetryConstants_MarkerId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BB_OVRTelemetryConstants_MarkerId(BB_OVRTelemetryConstants_MarkerId const& ) = delete;

/// @brief Field AddBlock offset 0xffffffff size 0x4
static constexpr int32_t  AddBlock{static_cast<int32_t>(0x9b81ac4)};

/// @brief Field InstallBlockData offset 0xffffffff size 0x4
static constexpr int32_t  InstallBlockData{static_cast<int32_t>(0x9b82e69)};

/// @brief Field InstallSDK offset 0xffffffff size 0x4
static constexpr int32_t  InstallSDK{static_cast<int32_t>(0x9b83799)};

/// @brief Field OpenSceneWithBlock offset 0xffffffff size 0x4
static constexpr int32_t  OpenSceneWithBlock{static_cast<int32_t>(0x9b82761)};

/// @brief Field OpenWindow offset 0xffffffff size 0x4
static constexpr int32_t  OpenWindow{static_cast<int32_t>(0x9b82479)};

/// @brief Field RemoveSDK offset 0xffffffff size 0x4
static constexpr int32_t  RemoveSDK{static_cast<int32_t>(0x9b836a8)};

/// @brief Field RunBlock offset 0xffffffff size 0x4
static constexpr int32_t  RunBlock{static_cast<int32_t>(0x9b82868)};

/// @brief Field UpdateBlock offset 0xffffffff size 0x4
static constexpr int32_t  UpdateBlock{static_cast<int32_t>(0x9b82ac9)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6566};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BB_OVRTelemetryConstants_MarkerId, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/BB/AnnotationType
class CORDL_TYPE BB_OVRTelemetryConstants_AnnotationType : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr BB_OVRTelemetryConstants_AnnotationType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BB_OVRTelemetryConstants_AnnotationType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BB_OVRTelemetryConstants_AnnotationType(BB_OVRTelemetryConstants_AnnotationType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BB_OVRTelemetryConstants_AnnotationType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BB_OVRTelemetryConstants_AnnotationType(BB_OVRTelemetryConstants_AnnotationType const& ) = delete;

/// @brief Field ActionTrigger offset 0xffffffff size 0x8
static constexpr ::ConstString  ActionTrigger{u"action_trigger"};

/// @brief Field BlockId offset 0xffffffff size 0x8
static constexpr ::ConstString  BlockId{u"BlockId"};

/// @brief Field BlockName offset 0xffffffff size 0x8
static constexpr ::ConstString  BlockName{u"BlockName"};

/// @brief Field Error offset 0xffffffff size 0x8
static constexpr ::ConstString  Error{u"error"};

/// @brief Field InstanceId offset 0xffffffff size 0x8
static constexpr ::ConstString  InstanceId{u"InstanceId"};

/// @brief Field Version offset 0xffffffff size 0x8
static constexpr ::ConstString  Version{u"Version"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6567};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BB_OVRTelemetryConstants_AnnotationType, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants/BB
class CORDL_TYPE OVRTelemetryConstants_BB : public ::System::Object {
public:
// Declarations
using AnnotationType = ::GlobalNamespace::BB_OVRTelemetryConstants_AnnotationType;

using MarkerId = ::GlobalNamespace::BB_OVRTelemetryConstants_MarkerId;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetryConstants_BB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants_BB", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTelemetryConstants_BB(OVRTelemetryConstants_BB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants_BB", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTelemetryConstants_BB(OVRTelemetryConstants_BB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6568};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryConstants_BB, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetryConstants
class CORDL_TYPE OVRTelemetryConstants : public ::System::Object {
public:
// Declarations
using BB = ::GlobalNamespace::OVRTelemetryConstants_BB;

using Editor = ::GlobalNamespace::OVRTelemetryConstants_Editor;

using OVRManager = ::GlobalNamespace::OVRTelemetryConstants_OVRManager;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetryConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTelemetryConstants(OVRTelemetryConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTelemetryConstants(OVRTelemetryConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryConstants, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_OVRTelemetryConstants_ConsentOrigins, "", "OVRTelemetryConstants/OVRManager/ConsentOrigins");
NEED_NO_BOX(::GlobalNamespace::BB_OVRTelemetryConstants_AnnotationType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BB_OVRTelemetryConstants_AnnotationType*, "", "OVRTelemetryConstants/BB/AnnotationType");
NEED_NO_BOX(::GlobalNamespace::BB_OVRTelemetryConstants_MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BB_OVRTelemetryConstants_MarkerId*, "", "OVRTelemetryConstants/BB/MarkerId");
NEED_NO_BOX(::GlobalNamespace::Editor_OVRTelemetryConstants_AnnotationType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Editor_OVRTelemetryConstants_AnnotationType*, "", "OVRTelemetryConstants/Editor/AnnotationType");
NEED_NO_BOX(::GlobalNamespace::Editor_OVRTelemetryConstants_MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Editor_OVRTelemetryConstants_MarkerId*, "", "OVRTelemetryConstants/Editor/MarkerId");
NEED_NO_BOX(::GlobalNamespace::OVRManager_OVRTelemetryConstants_AnnotationTypes);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_OVRTelemetryConstants_AnnotationTypes*, "", "OVRTelemetryConstants/OVRManager/AnnotationTypes");
NEED_NO_BOX(::GlobalNamespace::OVRManager_OVRTelemetryConstants_MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_OVRTelemetryConstants_MarkerId*, "", "OVRTelemetryConstants/OVRManager/MarkerId");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetryConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryConstants*, "", "OVRTelemetryConstants");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetryConstants_BB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryConstants_BB*, "", "OVRTelemetryConstants/BB");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetryConstants_Editor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryConstants_Editor*, "", "OVRTelemetryConstants/Editor");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetryConstants_OVRManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryConstants_OVRManager*, "", "OVRTelemetryConstants/OVRManager");
