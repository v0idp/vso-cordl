#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Unity/Services/Core/Internal/AsyncOperationBase.hpp"
#include "Unity/Services/Core/Internal/CircularDependencyException.hpp"
#include "Unity/Services/Core/Internal/ComponentRegistry.hpp"
#include "Unity/Services/Core/Internal/CoreDiagnostics.hpp"
#include "Unity/Services/Core/Internal/CoreLogger.hpp"
#include "Unity/Services/Core/Internal/CoreMetrics.hpp"
#include "Unity/Services/Core/Internal/CorePackageRegistry.hpp"
#include "Unity/Services/Core/Internal/CoreRegistration.hpp"
#include "Unity/Services/Core/Internal/CoreRegistry.hpp"
#include "Unity/Services/Core/Internal/CoreRegistryInitializer.hpp"
#include "Unity/Services/Core/Internal/DependencyTree.hpp"
#include "Unity/Services/Core/Internal/DependencyTreeComponentHashException.hpp"
#include "Unity/Services/Core/Internal/DependencyTreeExtensions.hpp"
#include "Unity/Services/Core/Internal/DependencyTreeInitializeOrderSorter.hpp"
#include "Unity/Services/Core/Internal/DependencyTreePackageHashException.hpp"
#include "Unity/Services/Core/Internal/DependencyTreeSortFailedException.hpp"
#include "Unity/Services/Core/Internal/DictionaryExtensions.hpp"
#include "Unity/Services/Core/Internal/HashException.hpp"
#include "Unity/Services/Core/Internal/IComponentRegistry.hpp"
#include "Unity/Services/Core/Internal/IInitializablePackage.hpp"
#include "Unity/Services/Core/Internal/IInitializablePackageV2.hpp"
#include "Unity/Services/Core/Internal/IPackageRegistry.hpp"
#include "Unity/Services/Core/Internal/IServiceComponent.hpp"
#include "Unity/Services/Core/Internal/IServiceRegistry.hpp"
#include "Unity/Services/Core/Internal/LockedComponentRegistry.hpp"
#include "Unity/Services/Core/Internal/LockedPackageRegistry.hpp"
#include "Unity/Services/Core/Internal/MissingComponent.hpp"
#include "Unity/Services/Core/Internal/PackageInitializationInfo.hpp"
#include "Unity/Services/Core/Internal/PackageRegistry.hpp"
#include "Unity/Services/Core/Internal/ServiceRegistry.hpp"
#include "Unity/Services/Core/Internal/TaskAsyncOperation.hpp"
#include "Unity/Services/Core/Internal/UnityServicesInitializer.hpp"
#include "Unity/Services/Core/Internal/UnityServicesInternal.hpp"
#include "Unity/Services/Core/Internal/UnityWebRequestUtils.hpp"
#ifdef __cpp_modules
                    export module Internal;
                    #endif
                
