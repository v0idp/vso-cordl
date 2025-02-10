#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/WarpMousePositionCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WarpMousePositionCommand)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct WarpMousePositionCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo, UnityEngine.InputSystem.LowLevel.InputDeviceCommand, UnityEngine.Vector2
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand
#pragma pack(push, 0)
struct CORDL_TYPE WarpMousePositionCommand {
public:
// Declarations
/// @brief Field baseCommand, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseCommand, put=__cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Field warpPositionInPlayerDisplaySpace, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_warpPositionInPlayerDisplaySpace, put=__cordl_internal_set_warpPositionInPlayerDisplaySpace)) ::UnityEngine::Vector2  warpPositionInPlayerDisplaySpace;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

/// @brief Method Create, addr 0x2e6b55c, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand Create(::UnityEngine::Vector2  position) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_warpPositionInPlayerDisplaySpace() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_warpPositionInPlayerDisplaySpace() ;

constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr void __cordl_internal_set_warpPositionInPlayerDisplaySpace(::UnityEngine::Vector2  value) ;

/// @brief Method get_Type, addr 0x2e6b4fc, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic, addr 0x2e6b52c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr WarpMousePositionCommand() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "warpPositionInPlayerDisplaySpace", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr WarpMousePositionCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, ::UnityEngine::Vector2  warpPositionInPlayerDisplaySpace) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___baseCommand_padding[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___baseCommand_padding_forAlignment[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___warpPositionInPlayerDisplaySpace_padding[0x8];
/// @brief Field warpPositionInPlayerDisplaySpace, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___warpPositionInPlayerDisplaySpace;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___warpPositionInPlayerDisplaySpace_padding_forAlignment[0x8];
/// @brief Field warpPositionInPlayerDisplaySpace, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___warpPositionInPlayerDisplaySpace_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kSize offset 0xffffffff size 0x4
static constexpr int32_t  kSize{static_cast<int32_t>(0x10)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand, "UnityEngine.InputSystem.LowLevel", "WarpMousePositionCommand");
