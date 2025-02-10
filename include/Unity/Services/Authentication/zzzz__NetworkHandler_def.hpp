#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/NetworkHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkHandler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Authentication {
class INetworkConfiguration;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class NetworkHandler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::NetworkHandler);
// Dependencies System.Object, Unity.Services.Authentication.INetworkHandler
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.NetworkHandler
class CORDL_TYPE NetworkHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Configuration)) ::Unity::Services::Authentication::INetworkConfiguration*  Configuration;

/// @brief Field <Configuration>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::Unity::Services::Authentication::INetworkConfiguration*  _Configuration_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::INetworkHandler"
constexpr operator  ::Unity::Services::Authentication::INetworkHandler*() noexcept;

static inline ::Unity::Services::Authentication::NetworkHandler* New_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration) ;

/// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method PostAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::StringW  url, ::System::Object*  payload, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers) ;

constexpr ::Unity::Services::Authentication::INetworkConfiguration* const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::Unity::Services::Authentication::INetworkConfiguration*& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::INetworkConfiguration*  value) ;

/// @brief Method .ctor, addr 0x2e96630, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration) ;

/// @brief Method get_Configuration, addr 0x2e989d8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::INetworkConfiguration* get_Configuration() ;

/// @brief Convert to "::Unity::Services::Authentication::INetworkHandler"
constexpr ::Unity::Services::Authentication::INetworkHandler* i___Unity__Services__Authentication__INetworkHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkHandler(NetworkHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkHandler(NetworkHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11576};

/// @brief Field <Configuration>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::INetworkConfiguration*  ____Configuration_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::NetworkHandler, ____Configuration_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::NetworkHandler, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::NetworkHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::NetworkHandler*, "Unity.Services.Authentication", "NetworkHandler");
