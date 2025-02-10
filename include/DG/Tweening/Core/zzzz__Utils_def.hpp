#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Utils)
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Core {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Utils);
// Dependencies System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Field _defAssembliesToQuery, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defAssembliesToQuery, put=setStaticF__defAssembliesToQuery)) ::ArrayW<::StringW,::Array<::StringW>*>  _defAssembliesToQuery;

/// @brief Field _loadedAssemblies, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__loadedAssemblies, put=setStaticF__loadedAssemblies)) ::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>  _loadedAssemblies;

/// @brief Method Angle2D, addr 0x18ea1c8, size 0x14c, virtual false, abstract: false, final false
static inline float_t Angle2D(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method GetLooseScriptType, addr 0x18ea470, size 0x258, virtual false, abstract: false, final false
static inline ::System::Type* GetLooseScriptType(::StringW  typeName) ;

/// @brief Method RotateAroundPivot, addr 0x18ea314, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RotateAroundPivot(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  pivot, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Vector3AreApproximatelyEqual, addr 0x18ea370, size 0x100, virtual false, abstract: false, final false
static inline bool Vector3AreApproximatelyEqual(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Vector3FromAngle, addr 0x18ea180, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Vector3FromAngle(float_t  degrees, float_t  magnitude) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF__defAssembliesToQuery() ;

static inline ::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*> getStaticF__loadedAssemblies() ;

static inline void setStaticF__defAssembliesToQuery(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF__loadedAssemblies(::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Utils, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::Utils);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Utils*, "DG.Tweening.Core", "Utils");
